// 1. Create a `Vehicle` base class and derive a `Car` class that adds specific features.  
#include<iostream>
using namespace std;

// Base Class
class Vehicle{
    public : 
        int price;
        string fuel,brand;
        Vehicle(int p,string f,string b){
            price = p;
            fuel = f;
            brand = b;
        }
};

// derived Class 
class Car : public Vehicle{
    public :
        Car(int a,string b,string c) : Vehicle(a,b,c){

        }

        void show(){
            cout << "Brand :" << brand <<endl;
            cout << "Fuel :" << fuel<<endl;
            cout << "Price :" << price <<endl;
        }
};

int main(){
    Car car1(1000000,"Petrol","XYZ");

    car1.show();
    return 0;
}


// 6. Implement a `Book` class and derive a `LibraryBook` that includes due dates and borrower info.  