// read Data : 
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string txt;  
    // For Create a New File
    ifstream myFile1("file1.txt");
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    getline(myFile1,txt);
    cout << txt << endl;
    myFile1.close();
   return 0;
}


// Write + create a new File
// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     // For Create a New File
//     ofstream myFile1("file1.txt");

//     myFile1 << "This is New Data" <<endl;
//     myFile1.close();
    



//     return 0;
// }