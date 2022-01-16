
#include<iostream>
using namespace std;
class Base {

public:

    void display()
    {
        cout<<"display of base"<<endl;

    }

};
class Derived : public Base{
    public:
    void show(){
        cout<<"show of derived"<<endl;
    }
};

int main(){
    Base b1;
    b1.display();
    Derived d;
    d.display();
    d.show();

}


