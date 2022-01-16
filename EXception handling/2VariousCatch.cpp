
#include<iostream>
using namespace std;

int main(){
    try{
        throw "pikachu";
    }

    catch(int e){
        cout<<"int catch"<<endl;
    }

    catch(double e){
        cout<<"its double "<<endl;
    }
    //ellips.... eg. catch(...) --> this is call all catch it contain all type of catch which were gonnaa throw
    catch(...){
        cout<<"all catch"<<endl;
    }
    return 0;
}


