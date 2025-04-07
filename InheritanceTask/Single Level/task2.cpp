// 5. Model a `Building` base class and derive a `Hospital` class that adds medical departments.  
#include<iostream>
using namespace std;

// Base Class 
class Building{
    public : 
        int floor;
        string bname;
        bool parking;

        Building(int f,string b,bool p){
            floor = f;
            bname = b;
            parking = p;
        }

        void showdata(){
            cout << "Name :" << bname << endl;
            cout << "No of Floor : " <<floor <<endl;
            cout << "Parking : " << parking <<endl;
        }
};

//derived Class 
class Hospital : public Building{
    public : 
        bool medical_kit;
        string doctorname;
        int no_Nurse;
        Hospital(int a,string b,bool c,bool d,string e,int n) : Building(a,b,c){
            medical_kit = d;
            doctorname = e;
            no_Nurse = n;
        }

        void medical_departments(){
            cout << "Medical Department : " <<endl;
            cout << "Doctor Name : " << doctorname <<endl;
            cout << "No_Nurse : "<< no_Nurse <<endl;
            cout << "Medical Kit : " << medical_kit << endl;
        }

};

int main(){

    Hospital h1(5,"Civil",false,true,"Dr.Shah",3);

    h1.medical_departments();
    h1.showdata();
    return 0;
}


// 9. Model a `Plant` base class and derive a `FloweringPlant` class with flower-specific data. 