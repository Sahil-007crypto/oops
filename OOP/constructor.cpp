





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
//constructors
/*
    Rectangle(){
        length = 1;
        breadth = 1;

    }
    */
//parameterise constructors
    Rectangle(int l = 1 , int b = 1){
        setLength(l);
        setBreadth(b);
    }
//copy constructors

    Rectangle(Rectangle &rect){
        length = rect.length;
        breadth = rect.breadth;
    }

//we are setting the value
        void setLength(int l){
            if(l < 0)
                length = 1;
            else
                length = l;
        }
        void setBreadth(int b){
            if(b < 0)
                breadth = 1;
            else
            breadth = b;
        }
//now what is the length and breadth

        int getLen(){
            return length;
        }
        int getBread();
//int the class function all the class are inline functions but getBread()
//this function is writtern out of the function hence the expansion of the function
//out of the main expansion         
};
// 

int Rectangle ::getBread(){
            return breadth;
        }


int main(){

    Rectangle r1;
    
    r1.setBreadth(20);
    r1.setLength(10);

    Rectangle r2(30,48);

    Rectangle r3(r1);
    cout<<r3.perimeter()<<" its perimeter "<<endl;

    cout<<r1.area()<<endl;

    cout<<r2.area()<<endl;

    Rectangle r4;
    cout<<r4.area()<<endl;



}




