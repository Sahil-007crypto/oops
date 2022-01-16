#include<iostream>
using namespace std;

class myexception1{

};
class myexception2 : public myexception1{

};
int main(){
    try{
        throw myexception1();
    }
    
    //here first write a child class then write a parent class its mendatory.....
    catch(myexception2 e){
        cout<<"myexception12 catch"<<endl;
    }

    catch(myexception1 e){
        cout<<"myexception1 catch"<<endl;
    }
    //in the program all catch block must come last it contain all type of exception hence
    catch(...){
        cout<<"all catch like i am papa"<<endl;
    }
    return 0;
    
    
}



