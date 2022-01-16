





#include<iostream>
using namespace std; 

class Rectangle{

    private:
    
        int length;
        int breadth;

    public:
        int area(){
            return length * breadth;
        }
        int perimeter(){

            return 2*(length + breadth);
        }
//we are setting the value
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
//now what is the length and breadth

        int getLen(){
            return length;
        }
        int getBread(){
            return breadth;
        }
        
};

int main(){

    Rectangle r1;
    //r1.length = 10;
    r1.setBreadth(20);
    r1.setLength(10);

    cout<<r1.area()<<endl;


}




