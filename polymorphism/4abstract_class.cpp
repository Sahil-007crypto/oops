
#include<iostream>
using namespace std;

class Car{
    public:
    virtual void start() =0;
    virtual void stop() =0;
    //in this class we cannot create object of Car class
    // this class also called as abstract class

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