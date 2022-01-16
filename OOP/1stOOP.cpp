

#include<iostream>
using namespace std; 

class Rectangle{

    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){

        return 2*(length + breadth);
    }
};

int main(){
    Rectangle r1, r2;
    Rectangle *p; // this is the pointer memory belongs to stack 
    p = &r1;

    r1.length = 10;
    r2.length = 20;
    r1.breadth = 20;
    r2.breadth = 10;

    cout<<r1.area()<<" this is area"<<endl;
    cout<<r1.perimeter()<<" this is perimeter"<<endl;
    p->length = 30;
    cout<<r1.area()<<" this is area"<<endl;
    


}




