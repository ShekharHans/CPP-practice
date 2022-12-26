#include<iostream>
using namespace std;
void number (int n){
    int i=1;
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    
}
int main()
{
    int n;
    cin>>n;
    number(n);
    
    return 0;
}