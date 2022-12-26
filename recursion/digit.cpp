#include<iostream>
using namespace std;
int digit( int num){
    int count=0;
    if (num>0)
    {
        count++;
        
    }
    else
    {
        return count ;
    }
    
    int smallOutput=digit(num/10);
    int output=smallOutput+count;
    return output;
}

int main()
{
    int num;
    cin>>num;
    int output=digit(num);
    cout<<output<<endl;

    return 0;
}