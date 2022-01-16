
#include<iostream>
using namespace std;
int main(){
//without parameter
    [](){cout<<"hello "<<endl;}();

//with parameter
    [](int x, int y){
        cout<<"sum"<<" "<<x+y<<endl;
    } (10,5);
    //with return type
    int a=[](int x,int y){return x+y;}(20,5);
    cout<<a<<endl;

    //another expression 
    //if wanna to use int vaariable in unnamed function
    //we can use but with using "&" referance using 
    int b=10;
    [&](){cout<<b<<endl;}();
}

// 4 wwajta meeting ics 
