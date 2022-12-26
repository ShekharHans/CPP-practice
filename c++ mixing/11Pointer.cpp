#include<iostream>
using namespace std;

int main()
{
    // What is pointer ---->Data Type which holds the address of other data types
    int a=3;
    int* b=&a;
    // & ---> (Address of) Operator

    cout<<"Address of a : " <<b<< endl;
    cout<<"Address of a : " <<&a<< endl;
    

    // * ---> (Value at) Dereference operator 

    cout<<"The value at address  b : "<<*b<< endl;

    // Pointer to Pointer 
    int** c=&b;
    cout<<"the adress of b is : "<<&b<<endl;
    cout<<"the adress of b is : "<<c<<endl;
    cout<<"the value of adress c is : "<<*c<<endl;
    cout<<"the value at adress value_at (value_at(c)) is : "<<**c<<endl;

    return 0;    
}