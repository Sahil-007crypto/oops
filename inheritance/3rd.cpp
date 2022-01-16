
#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"non para base class"<<endl;
        }
    Base(int c){
        cout<<"with para Base class "<<c<<endl;
    }
};
class Derived :public Base{
  public:
    Derived(){
        cout<<"non-para Derived class"<<endl;
    }
    Derived(int y){
        cout<<"with para derived class "<<y<<endl;
    }
    Derived(int c, int y):Base(c){
        cout<<"with para derived class "<<y<<endl;
    }
};

int main(int argc, char const *argv[])
{   
    Derived d(10,5);
    
    
    return 0;
}


