#include<iostream>
using namespace std;

class Calc{
    public : 
    void sum(){
        int a,b;
        cout<< "Enter First Value : " ;
        cin>> a;
        cout<< "Enter Second Value : ";
        cin>> b;
        cout<< "Addition  is : " << a+b << endl;
    }

    void sum (int a, int b){
        cout<< "Addition is : " << a+b << endl;
    }
    void sum (double a, double b){
        cout<< "Addition is : " << a+b << endl;
    }
   
};
int main(){
    Calc obj1;
    // obj1.sum();
    obj1.sum(100,200);
    obj1.sum(100.56,200.40);
    return 0;
}



// Book1 : Book2



/*
Travel Booking System:
Create a Booking class with an overloaded method bookTicket() that supports:

Booking with destination only.

Booking with destination and date.

Booking with destination, date, and passenger details.
*/