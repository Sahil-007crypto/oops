

#include<iostream>
using namespace std;

class Car{
    public:
    virtual void start(){
        cout<<"Car started "<<endl;
    }
    virtual void stop() {
        cout<<"Car stop "<<endl;
    }   
//here we can create object of Car class
};

class Inova : public Car{
    public:
    void start(){
        cout<<"inova started "<<endl;
    }
    void stop(){
        cout<<"Inova stop "<<endl;
    }

};

class Swift : public Car{
    public:
    void start(){
        cout<<"swift started "<<endl;
    }
    void stop(){
        cout<<"swift stop "<<endl;
    }

};

int main(){

    Car *c =new Inova();
    c-> start();
    c = new Swift();
    c-> start();
    // this is polymorphism same function but the calling 
    // of funciton is diffrent 

    return 0;
}





