



#include<iostream>
using namespace std; 

class Rectangle{

    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter();
};
int Rectangle ::perimeter(){

        return 2*(length + breadth);
    }
int main(){

    Rectangle *p;

    p = new Rectangle;

//write this 2 lines in single line 

// Rectangle *p = new Rectangle();

    p->length = 10;
    p->breadth = 10;
    cout<<p->area()<<endl;
    
}








