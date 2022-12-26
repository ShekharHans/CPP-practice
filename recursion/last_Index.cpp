#include<iostream>
using namespace std;
int Last_Index(int input[],int size,int x){
    if (size==0)
    {
        return -1;
    }
    if (input[size]==x)
    {
        return size ;
    }
    int smalloutput=Last_Index(input,size-1,x);
    
    
}
int main()
{
    int size;
    cin>>size;
    int input[100];
    for (int i = 0; i < size; i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    int output=Last_Index(input,size,x);
    cout<<output<<endl;
    return 0;
}