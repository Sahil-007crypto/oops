
#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    public:
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    rectangle r1;
//     r1.length=10;
//     r1.breadth=5;
//you cannot acess the private members of the class with using only object
//you need to put some function to get the values of private members
//function like setLenth,setBreadth ... getLenth,getBreadth 
// 
    cout<<r1.area()<<endl;
}



