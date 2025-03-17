
#include<iostream>
using namespace std;

class Person{
public:
    int x;
    int y;
    Person(int a,int b) {
        this->x = a;
        this->y = b;
    }
};

class Person2 : public Person {
    public:
        int z;
        Person2(int a,int b,int c) : Person(a,b){
            z = c;

            cout << "Add : " << x+y+z;
        }
};

int main(){
    Person2 p(12,13,14);
    // cout << p.x;
    // cout << p.y;
    // cout << p.z;
}


// #include<iostream>
// using namespace std;

// class Person{
// public:
//     int x;
//     int y;
//     Person(int a,int b) {
//         this->x = a;
//         this->y = b;
//     }
// };

// int main(){
//     Person p(12,13);

//     cout << "Add  : " << p.x+p.y;
// }
