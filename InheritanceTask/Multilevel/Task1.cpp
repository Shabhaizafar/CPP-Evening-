// 26. Model a `User` → `RegisteredUser` → `PremiumUser` class in a web app.
#include<iostream>

using namespace std;
class User{
    public : 
        string username;
        string userid;
        User(string uname,string uid){
            this->username= uname;
            this->userid = uid;
        }

};

class RegisteredUser : public User{
    public : 
        string email;
        string pwd;
        RegisteredUser(string uname,string uid,string email,string pwd) : User(uname,uid){
            this->email = email;
            this->pwd = pwd;
        }

        void Reg(){
            cout << "Registered Successfully!!" <<endl;
        }
};

class PremiumUser : public RegisteredUser{
    public: 
        bool subscription = false;
        int counter=0;
       
        PremiumUser(string uname,string uid,string email,string pwd,bool subs) : RegisteredUser(uname,uid,email,pwd){
            this->subscription = subs;
            if(subscription) counter=1;
        }

        void pre(){
            if(this->counter){
                cout << "Premium User"<<endl;
            }else{
                cout << "Not a Premium User"<<endl;
            }
        }
};

int main(){
    PremiumUser user1("Raj","Raj_01","raj@gmail.com","raj1234",false);


    user1.Reg();
    user1.pre();
    return 0;
}



// 24. Build a `LivingBeing` → `Animal` → `Dog` class with specific traits.