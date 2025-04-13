// 15. Design a `Pilot` and `Engineer` class, then derive an `AerospaceExpert` class.  
#include<iostream>
using namespace std;

class Pilot{
    public : 
        string pname;
        int hours;

        Pilot(string p,int h){
            pname = p;
            hours = h;
        }
        void fly_aircraft(){
            cout << this->pname<<" is flying an aircraft with "<<this->hours << " flight hours." <<endl;
        }


};
class Engineer{
    public : 
        string ename;
        string field;

        Engineer(string e,string f){
            ename = e;
            field = f;
        }
        void  design_systems(){
        cout << this->ename << " is designing systems in the field of " << this->field <<" engineering.";
        }

};
class AerospaceExpert : public Pilot,public Engineer{
    public : 
        AerospaceExpert(string name,string field,int hours) :  Engineer(name,field),Pilot(name,hours){

        }
};

int main(){
    AerospaceExpert a1("Raj","Hardware",5);

    a1.fly_aircraft();
    a1.design_systems();
    return 0;
}


















//HW :  16. Model a `Chef` and `Nutritionist` class, then derive a `HealthChef` class.  