#include<iostream>
using namespace std;
int Index(int input[],int size,int x){
    
    if (size<0)
    {
        return -1;
    }
    if (input[size]==x)
    {
        return size;
    }
    
    int smalloutput= Index(input,size-1,x);
    return smalloutput;
    
    
}

int main()
{
    int size;
    cin>>size;
    int input[100];
    int i;
    for( i=0;i<size;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    int output=Index(input,size,x);
    
    
    cout<<output<<endl;
    return 0;
}