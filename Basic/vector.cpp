#include<iostream>
#include<vector>
using namespace std;
int main(){
    // How to Create a Vector : 
    // syntax 
    // vector<datatype> vactorname;
    // vector<int> vector1;

    // How to Allocate Static Memory  : also value initialize with : 0
    // vector<int> vector1(3);
    // How to Allocate Static Memory  : also value initialize with : any number
    // vector<int> vector1(3,3);


    // cout <<"Value of Vector1 : " << vector1[0];
    // cout <<"Value of Vector1 : " << vector1[1];
    // cout <<"Value of Vector1 : " << vector1[3];

    // how to Use Loop with Vector : 
    // vector<int> vector1(3,3);
    // vector<int> vector1;
    // for (auto &&value : vector1)
    // {
    //     cout << value <<endl;
    // }
    // vector1[0] = 10;

    // vector1.pop_back();
    // vector1.push_back(12);
    // vector1.insert(vector1.begin()+1,100);

    // vector1.erase(vector1.begin()+1);

    // for (int i = 0; i < vector1.size(); i++)
    // {
    //     // cout<< "Value of " << i<< " :" << vector1[i] << endl;
    //     cout<< "Value of " << i<< " : " << vector1.at(i) << endl;
    // }
        // cout<<vector1.empty();

    return 0;
}

/*
In C++, a vector is a dynamic array provided by the Standard Template Library (STL). It is part of the <vector> header and offers several advantages over traditional arrays, such as dynamic resizing, ease of insertion/deletion, and built-in functions.

Key Features of Vectors:
Dynamic Size: Unlike arrays, vectors can grow and shrink automatically.
Contiguous Memory Allocation: Similar to arrays, elements are stored in contiguous memory locations.
Automatic Reallocation: If capacity is exceeded, vectors allocate a new larger memory block and copy existing elements.
Efficient Access: Provides constant-time access to elements using the [] operator.
Built-in Functions: Supports many useful functions like push_back(), pop_back(), size(), insert(), and erase().
*/