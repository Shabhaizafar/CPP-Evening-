
#include<iostream>
using namespace std;

class Father{
    public:
        string fathername = "Rajesh";
        string lastname = "Sharma";
    
};

class Boy: public Father{
    public : 
        string myname = "Raj";

        void bioData(){
            cout << "My Name is "<< this->myname <<" " << this->fathername<<" " << this->lastname<<endl;
        }
};

class Girl : public Father{
    public : 
        string myname = "Zoya";

        void bioData(){
            cout << "My Name is "<< this->myname <<" " << this->fathername<<" " << this->lastname<<endl;
        }
};

int  main(){
    Boy b1;
    Girl g1;

    b1.bioData();
    g1.bioData();
    return 0;    
}


// Hierarchical inheritance : 
// Base Class : Single (Parent Class)
// Derived Class : Multiple (more thn 1) (Child Class)(inherit Base Class)

// #include<iostream>
// using namespace std;

// // Base Class
// class A{
//     public:
//         void myTip(){
//             cout << "Parent Class: A"<< endl;
//         }
// };


// // Child 1 (inherit Class A)
// class B: public A{
//     public:
//         void payer(){
//             cout << "Child Class : B"<< endl;
//         }
// };

// // Child 2 (inherit Class A)
// class C : public A{
//     public :
//         void buyer(){
//             cout << "Child Class : C"<< endl;
//         }
// };

// int  main(){

//     B b1;
//     C c1;

//     b1.payer();
//     b1.myTip();

//     c1.buyer();
//     c1.myTip();

//     return 0;    
// }


