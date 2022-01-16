#include<iostream>
using namespace std;
class rect{
    public:
    int length;
    int breadth;
    int area(int l , int b);
    int perimeter();

};

int rect :: area(int l , int b){
    cout<<"its working"<<endl;
    return l*b;
}
int main(){
    rect r1;
    cout<<r1.area(2,3);
    return 0;
}
