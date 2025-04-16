// 32. Design a `Shape` class and derive `Circle`, `Rectangle`, and `Triangle` classes :- 
#include<iostream>

using namespace std;
class Shape{
    public : 
        void shape_meth(){
            cout << "Shape: " << endl;
            cout <<""<< endl;
        }
};

class Circle : public Shape{
    public : 
        int x,y,r;
        Circle (int xa,int ya,int ra){
            x=xa;
            y=ya;
            r=ra;
        }

        void area(){
            cout << "Area of Circle : "<< 22/7*this->r*this->r << endl;
        }

};

class Rectangle : public Shape{
    public : 
        int l;
        int b;
        Rectangle(int lx,int bx){
            l = lx;
            b = bx;
        }
        void area(){
            cout << "Area of Rectangle : "<< this->l* this->b << endl;
        }
};
class Triangle : public Shape{
    public : 
         int h;
         int b;
        Triangle(int hx,int bx){
            h = hx;
            b = bx;
        }
        void area(){
            cout << "Area of Triangle : "<< (float)1/2 * this->h * this->b << endl;
        }
};

int main(){
        Circle c1(50,50,10);
        Rectangle r1(50,10);
        Triangle t1(50,15);
        c1.shape_meth();
        c1.area();

        r1.shape_meth();
        r1.area();

        t1.shape_meth();
        t1.area();
    return 0;
}