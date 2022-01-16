

#include<iostream>
using namespace std; 

class Rectangle{

    private:
    
        int length;
        int breadth;

    public:
        int area();
        int perimeter();
        Rectangle(int l = 1 , int b = 1);
//copy constructors
        Rectangle(Rectangle &rect);

         
         
//we are setting the value
        void setLength(int l);
        void setBreadth(int b);
//now what is the length and breadth
        int getLen();
        int getBread();
};
//inheritance using cuboid class 
//this class inheriting from class Rectangle 
class cuboid : public Rectangle{
    private :
        int height ;

    public:
        cuboid(int h){
        height = h;
        }
        int getHeight(){
            return height;
        }
        void setHeight(int h){
            height = h;
        }
        int voulume(){
            return  height * getLen() * getBread() ;
        }
};

int main(){

    Rectangle r1(2,2);
    cout<<r1.area()<<endl;

    cuboid c(5);
    c.setBreadth(2);
    c.setLength(2);
    cout<<c.voulume()<<endl;
}

int Rectangle ::getBread(){
            return breadth;
        }
int Rectangle ::getLen(){
            return length;
        }
void Rectangle :: setBreadth(int b){
            if(b < 0)
                breadth = 1;
            else
            breadth = b;
        }
void Rectangle ::setLength(int l){
            if(l < 0)
                length = 1;
            else
                length = l;
        }
Rectangle ::Rectangle(Rectangle &rect){
        length = rect.length;
        breadth = rect.breadth;
    }
Rectangle ::Rectangle(int l , int b ){
        setLength(l);
        setBreadth(b);
    }
int Rectangle :: area(){
            return length * breadth;
        }
int Rectangle :: perimeter(){

            return 2*(length + breadth);
        }

