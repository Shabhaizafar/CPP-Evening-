// 9. Model a `Plant` base class and derive a `FloweringPlant` class with flower-specific data. 
#include<iostream>
using namespace std;
class Plant{
    public:
        string name;
        string type;
        Plant(string name, string type){
            this->name= name;
            type = type;
        }
        void displayPlant(){
            cout << "Name: " << name << endl << "Type: " << type << endl;
        }
};
class FloweringPlant : public Plant{
    public:
        string flower_name;
        string color;
        FloweringPlant(string name, string type, string flower_name, string color) : Plant(name, type){
            flower_name = flower_name;
            color = color;
        }
        void displayFlower(){
            cout << "Flower Name: " << flower_name << endl << "Color: " << color << endl;
        }
};
int main(){
    FloweringPlant fp("Chrysanthemum morifolium", "Herbaceous", "Chrysanthemum", "Yellow");
    fp.displayFlower();
    fp.displayPlant();
    return 0;
}