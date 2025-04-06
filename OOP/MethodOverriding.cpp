#include<iostream>
using namespace std;

class Person{
    public : 
    void show(){
        cout<< "Person Class" << endl;
    }
};
class Child : public Person{
    // public : 
    // void show(){
    //     cout<< "Derived Class" << endl;
    // }
};
int main(){
    Person o1;
    Child o2;
    o1.show();
    o2.show();
    return 0;
}

/*
Employee Payroll System:
A base class Employee has a method calculateSalary(). Override this method in derived classes like HourlyEmployee, SalariedEmployee, and CommissionEmployee.
*/