/*
S-level,M-level,M,H

S-level,M

M,H
=> Hybrid Inheritance : 
-> Combine More then 1 Inheritance which is Created Hybrid Inheritance.
*/
#include<iostream>

using namespace std;

class A{
    public : 
        void classA(){
            cout << "Class A"<<endl;
        }
};
class B : public A{
    public : 
        void classB(){
            cout << "Class B"<<endl;
        }
};

class C : public  A{
    public : 
        void classC(){
            cout << "Class C"<<endl;
        }
};

class Z{
    public : 
        void classZ(){
            cout << "Class Z"<<endl;
        }
};

class D : public B,public C,public Z{
    public : 
    void classD(){
        cout << "Class D"<<endl;
    }
};

int main(){
    D d1;
    d1.classD();
    d1.classB();
    d1.classC();
    d1.classZ();
    d1.classA();
    return 0;
}


/*
Scenario: A Company Hierarchy

Consider a company where we have different types of employees. There are Managers and Engineers, and both have distinct responsibilities. But there is also a special type of employee, TeamLead, who is both a Manager and an Engineer.

Class Breakdown:
Employee: The base class with common methods for all employees (e.g., work()).

Manager: A derived class that represents managerial responsibilities (e.g., manage()).

Engineer: A derived class that represents engineering responsibilities (e.g., code()).

TeamLead: A class that inherits from both Manager and Engineer, representing someone who manages and also works as an engineer.
*/ 