#include<iostream>
#include<vector>

using namespace std;
int main(){
    // pre defined 
    // int arr[]= {11,12,13,14,15};
    // int arr[30];
    // 120  : 12
    // cout<< "Size of Array : " << sizeof(arr) <<endl;
    // cout<< "Length of Array : " << sizeof(arr)/sizeof(arr[0]) <<endl;
    // cout<< "Length of Array : " << sizeof(arr)/sizeof(int) <<endl;
    // int n;
    // cout<< "Enter N : "<<endl;
    // cin >>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"Array is "<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }

    // Vector  : 
    // int arr = {11,12,13,14};
    // int arr[30];

    // without value and without size
    // vector<int> vector1;
    // with Value
    vector<int> vector1={11,12,131,14,14};
    // with Size : 
    // vector<int> vector1(4);
    //with size and value
    // vector<int> vector1(4,10);
    // vector<int> vector1(4,10);

    // cout<<vector1[0];
    // cout<<vector1.at(0);

    // cout<<*vector1.begin();
    // cout<<*vector1.end();
    vector1.pop_back();

    // vector1.

    // cout<<"Length of Vector : "<<vector1.size();

    for (auto &&i : vector1){
        cout<<i<<endl;
    }

    return 0;
}

/*
Control Statement  :  
1.condition Control Statement 
    1.if Statement 
        if (condition)
        {
                code;
        }
        
    2.if-else Statement
        if (condition)
        {
           
        }
        else
        {
        }
        
    3.ladder if-else Statement
        if (condition)
        {
        }
        else if (condition)
        {
        }
        else
        {
    
        }
        

    4.nested if-else Statement
        if (condition)
        {
            if (condition)
            {
            
            }
            else
            {
    
            }
            
        }
        

2.case Control Statement
    1.switch Statement
        switch (expression)
        {
        case constant expression:
            break;
        
        default:
            break;
        }

    
    2.nested switch Statement
        switch (expression)
        {
        case constant expression:
                switch (expression)
                {
                case constant expression:
            
                    break;
                
                default:
                    break;
                }
            break;
        
        default:
            break;
        }

3.loop Control Statement
    1.Basic for loop
        for (int i = 0; i < count; i++)
        {
            
        }
        
    2.while loop
        while (condition)
        {
            
        }
        
    3.do-while loop
        do
        {
    
        } while (condition);
        

    4.foreach Loop : forrange
        for (auto &&i : container)
        {
            
        }
        
*/ 


/*
Array : 
    1.1-D Array

    2.2-D Array

*/ 