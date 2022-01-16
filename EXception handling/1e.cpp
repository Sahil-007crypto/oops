
#include<iostream>
using namespace std;
int main(){
    int x=10, y=2,z;
    //int z= x/0; // see it gives 'warning: division by zero [-Wdiv-by-zero]'

    // int z= x/y;
    // cout<<z<<endl;

    try{
        if(y==0){
            throw 1;
        }
        z=x/y;
        cout<<z<<endl;

    }
    catch(int e){
        cout<<"division by zero "<<e<<endl;
    }
    cout<<"tata"<<endl;
}



