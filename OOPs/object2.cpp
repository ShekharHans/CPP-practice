#include<iostream>
using namespace std;
#include "class2.cpp"
int main()
{
    TotalMarks s1;
    TotalMarks s2;
    s1.math=90;
    s1.chem=85;
    s1.bio=87;
    cout<<s1.math<<" "<<s1.chem<<" "<<s1.bio<< endl;
    s1.privateMarks();
    return 0;
}