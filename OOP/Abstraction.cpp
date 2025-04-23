#include<iostream>
using namespace std;

class Vehicle{
    public: 
        virtual void drive() = 0; // pure Virtual Method 
};

class Car  : public Vehicle{
    public : 
    void drive() override{
        cout << "You can Drive Car!!" << endl;
    }
};


class Bike  : public Vehicle{
    public : 
    void drive() override{
        cout << "You can Ride a Bike!!" << endl;
    }
};
int main(){

    Vehicle* c1 = new Car();
    Vehicle* b1 = new Bike();
    c1->drive();
    b1->drive();
    return 0;
}

// #include<iostream>
// using namespace std;

// class Person{
//     private : 
//         int balance;

//     public : 
//         void set_balance(int b){
//             balance=b;
//             cout << "Balance Added Successfully!!" << endl;
//         }

//         void show_Data(){
//             cout << "You Balance : " << balance << endl;
//         }
// };
// int main(){

//     Person p1;
//     p1.set_balance(10000);
//     p1.show_Data();
//     return 0;
// }



/*
Sure! Here's a **real-life scenario-based practice question** that involves abstraction in C++:

---

**Scenario**:  
You are building a basic ATM software system. The user interacts with the ATM to perform tasks like checking balance, withdrawing money, and depositing cash. However, the user does not need to know how these operations are processed internally (e.g., communication with the bank server, validation logic, etc.).



### 📌 **Requirements**:
- Create an abstract class `ATMOperations` with pure virtual functions:
  - `checkBalance()`
  - `withdraw(float amount)`
  - `deposit(float amount)`
- Create a derived class `ATM` that implements these functions.
- Use private data members to store the balance.
- Demonstrate a user interacting with the ATM through a simple menu.

*/