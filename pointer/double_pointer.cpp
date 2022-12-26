#include<iostream>
using namespace std;

void increment (int **p){
    p=p+1;
    // cout<<P<<Endl;
}
void increment1 ( int **p){
    *p=*p+1;
    cout<<*p<<endl;
}
void increment2 (int **p ){
    **p=**p+1;
}
int main()
{
    int a=10;
     int *p=&a;
    cout<<p<<endl;
    int **p1=&p;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<**p1<<endl;
    increment1(*p);

    return 0;


}