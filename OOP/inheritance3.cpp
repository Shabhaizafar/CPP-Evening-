//Single Level Inheritance :
/*
    base class : 1  (Parent Class)
    derived Class : 1  (inherit base Class)
*/
//Multi Level Inheritance :
/*
    base class : 1  (Parent Class)
    derived Class : 1  (inherit base Class)
    sub-derived Class : 1 (inherit derived Class)
    sub-derived Class2 : 1 (inherit sub-derived Class)
*/
// Multiple Inheritance : 

/*
    Base Class : More the One
    derived Class : One


    Base Class :  Mather Class ,Father Class
    derived Class : Child (inherit Father & Mother Class)
*/
/*
#include<iostream>

using namespace std;
//Base Class 1 
class A{
    public :
    void sayHello(){
        cout << "Hello Everyone !!"<<endl;
    }
};
//Base Class 2 
class B{
    public :
    void sayBye(){
        cout << "Bye Bye Everyone !!"<<endl;
    }
};

//Derived Class (inherit Class A&B) 
class C : public A,public B{

};

int main(){
    C c1;
    c1.sayHello();
    c1.sayBye();
    return 0;
}
*/
/*-----------------------------------------------------------------------*/
#include<iostream>

using namespace std;
//Base Class 1 
class Father{
    public :
        string fathername;

        Father(string fname){
            fathername = fname;
        }
};
//Base Class 2 
class Mother{
    public :
    string mothername;

    Mother(string mname){
        mothername = mname;
    } 
};

//Derived Class (inherit Class Father&Mother) 
class Child : public Father,public Mother{
    public : 
        string childname;
        Child(string cname,string fname,string mname): Father(fname),Mother(mname){
            childname = cname;
        }

        void display(){
            cout << "Child Name : "<< childname <<endl;
            cout << "Father Name : "<< fathername <<endl;
            cout << "Mother Name : "<< mothername <<endl;
        }
};

int main(){
    Child c1("Ajay Kumar","Rajesh Bhai","Zoya Ben");

    c1.display();
    return 0;
}