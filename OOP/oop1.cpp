#include<iostream>

using namespace std;

// How to Create a Class : 
class Student{
    public:
        // int Roll_no = 12;  //pre defined 
        int rollno;  //declared
        string firstname;
};


int main(){
    // How to Create a Object : 
    
    Student s;
    s.rollno = 100;
    s.firstname = "Zafar";
    cout<< s.rollno;
    cout<< s.firstname;
    return 0;
}

// Title 
// UPPERCASE 
// lowercase
// camelCase
// snake_case
// zafarShabhai
// zafarAShabhai