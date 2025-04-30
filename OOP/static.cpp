// static Keyword : 
// // 1. Global : 

// #include<iostream>
// using namespace std;

// static int a;


// void saySomthing(){
//     cout << "Value of A  In : "<< a << endl;
//     a++;
// }
// void newOne(){
//     int a = 13;
//     cout << "Value of A  In2 : "<< a << endl;
//     a++;
// }
// int main(){
//     cout << "Static Keyword as a Global" << endl;
//     newOne();
//     saySomthing();
//     cout << "Value of A : "<< a;
//     return 0;
// }



// 2. Inside Function : 

// #include<iostream>
// using namespace std;

// void say(){
//     static int a = 12;
//     a++;
//     cout << "Value a : " <<a <<endl;
// }

// int main(){
//     say();
//     say();
//     say();
//     return 0;   
// }

// 2. Class :

// #include<iostream>
// using namespace std;

// class Person{
// protected : 
//     static int value1;

// private : 
//     int value2;

// public : 
//     int value3;

//     void say(){
//         value1 = 12;
//         value2 = 13;
//         value3 = 14;
//     }

//     void display(){
//         cout << "A : " << value1 << " B : " << value2 << " C :" << value3 << endl ;
//     }
// };

// class Child : public Person{
//     public : 
//     void display(Person& value1,Person& value2,Person& value3){
//         cout << "A : " << value1.value1 << " B : " << value2.value2 << " C :" << value3.value3 << endl ;
//     }
// };


// int main(){
//     Person p1;
//     p1.say();
//     p1.display();
//     return 0;   
// }
