#include <iostream>
using namespace std;

// class Parent{
// public:
//     string fathername;
//     string lastname;
//     Parent(string fname, string lname)
//     {
//         this->fathername = fname;
//         this->lastname = lname;
//     }
//     void displayData(){
//         cout << "My Name is " <<this->fathername << " " << this->lastname <<endl;
//     }
// };

class Parent{
    public:
        string fathername = "Raj";
        string lastname = "Shah";
    };

class Child : public Parent {
    public :  
        string ChildName;
        Child(){
            this->ChildName = "Rajesh";
        }
};

int main()
{
    // Parent person1("Raj","Shah");
    // person1.displayData();

    Child c1;
    cout << c1.ChildName;
    return 0;
}


/*
Parent : Base Class 
    two members


Child : Derived Class (inherit Parent Class)
    1 Members


if :  
Child Object : Child : 3 Members
 
else : 
Parent Object : Parent : 2 Members
*/


/*
#include <iostream>
using namespace std;

//Parent Class :
class Parent{
public:
    string fathername = "Raj";
    string lastname = "Shah";
};

class Child : public Parent {
    public : 
        string ChildName;
        Child(){
            this->ChildName = "Rajesh";
        }
};

int main()
{
    Parent p1;
    Child c1;
    cout << c1.ChildName <<endl;
    cout << c1.fathername <<endl;
    cout << c1.lastname << endl;
    
    cout << p1.ChildName <<endl;
    cout << p1.fathername <<endl;
    cout << p1.lastname << endl;
    return 0;
}
*/