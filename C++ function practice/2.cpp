#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i = 2; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;

}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}