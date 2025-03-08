// 1) BASICS
// a) Introduction to an OOPs Language.
// b) cin, cout, endl objects (along with string data type and getline function)
// c) Practice the fundamentals (control statements, functions, arrays and pointers)

    // vector 

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    // float 
    // char 
    // double
    string fname;
//    cout<<"Print Data1 \n";
//    cout<<"Print Data2"<<endl;
    // cout << "Enter the Value of N : ";
    // cin >> n;
    // cout << " Value of N : " << n;


    // cin >> fname;   
    //(ignore : whitespace,enter key,tab)       

    cout << "Enter the Value of N : ";
    cin >> n;
    cout << "Enter Your Name : ";
    cin.ignore();
    getline(cin,fname);
    cout << " Fname : " << fname;
    cout << " Value of N : " << n;
    return 0;
}