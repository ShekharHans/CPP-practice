#include<iostream>
using namespace std;
int glo = 6;

// global variables
void sum()
{
int a;
cout<<glo;
}
int main()
{
    int glo=12;
    glo=45;
    // local variables
    // local variables takes much more piorities than global variables
    // int a=4;
    // int b=5;
    int a=4,b=5;
    float pi=3.14;
    char c='u';
    bool is_true = false;
    // std::cout<<"This is tuitorial 4. \nThe value of a is "<<a<<".\nThe value of b is "<<b;
    // std::cout<<"\nThe value of pi is "<<pi;
    // std::cout<<"\nThe value of c is "<<c;
     cout<<glo<< is_true;
    return 0;
}