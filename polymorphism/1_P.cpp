

#include<iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"display the base class"<<endl;
        }

};
class derived : public Base{
    public:
        void display(){
            cout<<"display the derived class"<<endl;
        }
};

int main(){

    derived d;
    d.display();//this is for derived
    d.Base::display();//this is for Base class with derived class object
    Base b;//this one with base class object...
    b.display();

}

