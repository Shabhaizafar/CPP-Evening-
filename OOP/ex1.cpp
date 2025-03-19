// Base Class: Person → Stores basic customer details (name, age, address).
// Derived Class: BankAccount → Stores account details (account number, balance).
// Further Derived Class: SavingsAccount → Adds interest calculation and withdrawal limits.

#include<iostream>
using namespace std;

class Person{
    public : 
        string name, address;
        int age;
        Person(int a,string b,string c){
            this->age = a;
            this->name = b;
            this->address = c;
        };
};

class BankAccount : public Person {
    public :
        double account_no,balance;
        BankAccount(double ano,double blnc,int a,string b,string c) : Person(a,b,c){
            this->account_no = ano;
            this->balance = blnc;
        }
};
class SavingsAccount : public BankAccount{
    public : 
        SavingsAccount(double ano,double blnc,int a,string b,string c) : BankAccount(ano,blnc,a,b,c){
            cout << "Account Create Successfully";
        }
        void interest(){
            cout << "Interest Amount : " << this->balance*(0.10);
            this->balance = this->balance*(0.10) + this->balance;
        }
        void withdraw(double n){
            double m;
            m = this->balance - n;
            if (m <= 2000){
                cout << "BYEBYE👽" << endl;
            }
            else{
                this->balance = m;
            }
        }
};
int main(){
    SavingsAccount s(1234578,20000,12,"Raj","Gnr");
    // s.interest();
    s.withdraw(6000);

    cout<< s.balance ;
}



// E-Commerce System:

// Create a base class Product with attributes like name and price.
// Derive Electronic and Clothing from Product.
// Further derive Laptop from Electronic and Shirt from Clothing.