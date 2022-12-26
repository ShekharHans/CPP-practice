#include<iostream>
using namespace std;
void printArray(int input[],int n)
{
    cout<<"The result is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    cout<<endl;
}
void bubbleSort(int input[],int n)
{
    for (int j = 0; j<n-1; j++)
    {
        for (int i = 0; i < n-1-j; i++)
        {
            if (input[i]>input[i+1])
            {
                int temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
            }
            
        } 
        
    }
    
}

int main()
{
    int n;
    cout<<"Enter the value of n;"<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter the element of array : "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    bubbleSort(input,n);
    printArray(input,n);
    
    
    return 0;
}