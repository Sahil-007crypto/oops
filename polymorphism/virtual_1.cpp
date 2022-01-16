

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void fun(){
        cout<<"fun of Base class"<<endl;
    }
};
class Derived: public Base{
    public:
    void fun(){
        cout<<"fun of derived class"<<endl;
    }
    
};
int main(){

   Derived d;
   //d.fun();//derived class will call
   Base *ptr = &d;
   ptr->fun();
   //it call the Base class function cause pointer pointing on the base class
}
