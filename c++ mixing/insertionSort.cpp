#include<iostream>
using namespace std;
void printArray(int input[],int n){
    cout<<"The sorted array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    cout<<endl;
    
}
void insertionSort (int input[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=input[i];
        int j;
        for ( j = i-1; j>=0; j--)
        {
            if (current<input[j])
            {
                input[j+1]=input[j];
            }
            else
            {
                break;
            }
        }
        input[j+1]=current;
    }
    
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter the element of array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    insertionSort(input,n);
    printArray(input,n);
    return 0;
}