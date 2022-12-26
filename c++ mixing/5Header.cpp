// There are two types of Header files:
// 1.System Header Files: It comes with the compiler
#include <iostream>
// 2.User Defined Header Files: It is written by the programmer
// #include"This.h"-->This will produced an error if this.h is not present in current directory
using namespace std;
int main()
{
    int a = 3, b = 5;
    cout << "Operators in C++" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators
    cout << "Following are the Arithmetic operators in C++" << endl;
    cout << "The value of a+b is :" << a + b << endl;
    cout << "The value of a-b is :" << a - b << endl;
    cout << "The value of a*b is :" << a * b << endl;
    cout << "The value of a/b is :" << a / b << endl;
    cout << "The value of a%b is :" << a % b << endl; /*module arithmetic operator*/
    cout << "The value of a++ is :" << a++ << endl;   /*incriment arithmetic operator*/
    cout << "The value of a-- is :" << a-- << endl;   /*incriment arithmetic operator*/
    cout << "The value of ++a is :" << ++a << endl;   /*Decriment arithmetic operator*/
    cout << "The value of --a is :" << --a << endl;   /*Decriment arithmetic operator*/

    cout << endl;

    // Assignment Operators --> used to assign values to variables
    // int a=3,b=9;
    // char d='d';

    // Comparison Operators
    cout << "Following are the Comparison operators in C++" << endl;
    cout << "The value of a==b is:" << (a == b) << endl;
    cout << "The value of a!=b is:" << (a != b) << endl;
    cout << "The value of a<=b is:" << (a <= b) << endl;
    cout << "The value of a>=b is:" << (a >= b) << endl;
    cout << "The value of a<b is:" << (a < b) << endl;
    cout << "The value of a>b is:" << (a > b) << endl;

    //Logical Operators
    cout<<"Following are the Logical operators in C++"<<endl;
    cout << "The value of logical and operators ((a==b)&&(a<b)) is:" << ((a==b)&&(a<b)) << endl;
    cout << "The value of logical or operators ((a==b)||(a<b)) is:" << ((a==b)||(a<b)) << endl;
    cout << "The value of logical not operators (!(a==b)) is:" << (!(a==b)) << endl;


    return 0;
}