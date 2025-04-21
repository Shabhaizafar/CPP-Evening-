/*
1. Method Overloading (Same method name, different parameters — Compile Time Polymorphism)
Definition: When multiple methods in the same class have the same name but different parameters (number, type, or order), it's called method overloading.

✅ Key Points:
Happens in the same class.

Parameters must differ in type or number.

Return type can be different, but it’s not enough to overload by itself.
------------------------------------------------------------------------
2. Method Overriding (Same method name & signature, different behavior — Runtime Polymorphism)
Definition: When a subclass provides a specific implementation of a method that is already defined in its superclass.

✅ Key Points:
Must have the same method signature (name + parameters).

Happens between parent and child class.

Requires inheritance.

Used to change or extend base class behavior.
*/
// 1. Method OverLoading :
#include<iostream>
using namespace std;

class Calculator{
    public :
        void add(int a,int b){
            cout << "Addtion of Intger : " << a+b << endl;
        }
        void add(double a,double b){
            cout << "Addtion of Double : " << a+b << endl;
        }
};

int main(){
    Calculator c1;
    c1.add(12,13);
    c1.add(12.5,13.5);
    return 0;
}

