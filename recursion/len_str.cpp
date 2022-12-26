#include<iostream>
using namespace std;
int length(char str[]){
    if (str[0]=='\0')
    {
        return 0;
    }
    int count=0;
    if (str[0]!='\0')
    {
        count++;
    }
    
    int smallOutput=length(str+1);
    int output=smallOutput+1;
    return output;
}

int main()
{
    char str[100];
    cin>>str;
    int output=length(str);
    cout<<output<<endl;
    return 0;
}