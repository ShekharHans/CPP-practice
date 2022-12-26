#include<iostream>
using namespace std;
void selectionSort(int input[],int n){
    for (int i = 0; i < n-1; i++)
    {
    
    // figure out the minimum value
    int min=input[i],minIndex=i;
    for (int j = i+1; j <n; j++)
    {
        if (input[j]<min)
        {
            min=input[j];
            minIndex=j;
        }
    }
    // swap 
    int temp=input[i];
    input[i]=input[minIndex];
    input[minIndex]=temp;
    }
    
    }


int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    // int input[]={2,5,7,1,8,4};
    selectionSort(input,n);
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    cout<<endl;
    
    
    return 0;
}