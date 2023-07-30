#include<iostream>
using namespace std;
int digit(int num){
    int count=0;
    if (num>0)
    {
        count++;
    }
    else
    {
        return 0;
    }
    
    int output=digit(num/10);
    return output+count;
    
}
int main()
{
    int num;
    cin>>num;
    cout<<digit(num)<<endl;
    return 0;
}