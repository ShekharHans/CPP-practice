#include<iostream>
using namespace std;
int sum_digit(int digit){
    if (digit==0)
    {
        return 0 ;
    }
    
    int first=digit%10;
    int smallOutput=sum_digit(digit/10);
    int sum=first+smallOutput;
    
    return sum;
    
    
    
}
int main()
{
    int digit;
    cin>>digit;
    int output=sum_digit(digit);
    cout<<output<<endl;
    return 0;
}