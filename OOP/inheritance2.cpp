#include<iostream>
using namespace std;
class Vehicle{
    public: 
        string vehicle = "Vehicle";
};

class Bike : public Vehicle{
    public : 
        string bike = "Bike";
};

class SportBike : public Bike{
    public : 
        string b_bike = "Sport Bike";
};
int main(){
    SportBike s1;

    cout << s1.vehicle << endl;
    cout << s1.bike << endl;
    cout << s1.b_bike << endl;
}

/*
#include<iostream>
using namespace std;
class Vehicle{
    public: 
        void drive(){
            cout << " Driven";
        }   
};

class Bike : public Vehicle{
    public : 
        void drive(){
            cout << "Be Driven";
        }   
};
int main(){
    Bike b1;

    b1.drive();

}
*/