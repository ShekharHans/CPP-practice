#include<iostream>
using namespace std;
int selectionSort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min =input[i],minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (input[j]<min)
            {
                min=input[j];
                minindex=j;
            }
            
        }
        int temp=input[i];
        input[i]=input[minindex];
        input[minindex]=temp;
    }
    
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    selectionSort(input,n);
    cout<<"result of array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    cout<<endl;
    
    return 0;
}