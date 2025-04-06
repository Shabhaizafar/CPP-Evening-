#include<iostream>
using namespace std;
class Calc{
    public:
        int a,b;
    Calc(){
        cout<< "Default Constructor" << endl;
    }
    Calc(int x, int y){
        cout<< "With int Perameter" <<endl;
    }
};

int main(){
    // Calc obj1;

    Calc obj2(1,2);
    return 0;
}


/*
Student Registration System:
Create a Student class with multiple constructors to support:

Registering with just a name.

Registering with name and age.

Registering with name, age, and course.
*/