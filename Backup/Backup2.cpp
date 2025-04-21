// Constructor Overloading : 
#include<iostream>
using namespace std;

class Person{
    public :
        string fname,lname;
        int age;
        Person(){
            cout << "Nothing" <<endl;
        }
        Person(string s1,string s2){
            fname = s1;
            lname = s2;
            cout << "Your Name is " <<this->fname <<" " << this->lname << endl;
        }

        Person(string s1,string s2,int a){
            fname = s1;
            lname = s2;
            age = a;
            cout << "Your Name is " <<this->fname <<" " << this->lname<<".Your age is " << this->age <<"." << endl;
        }
};
int main(){
    Person p1("Raj","Shah");
    Person p2("Rajesh","Sharma",20);
    Person p3;
    return 0;
}