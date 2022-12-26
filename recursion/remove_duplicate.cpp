#include<iostream>
using namespace std;

void remove_duplicate(char arr[]){
    if (arr[0]=='\0')
    {
        return;
    }
    if (arr[0]!=arr[1])
    {
        remove_duplicate(arr+1);
    }
    
    else
    {
        int i ;
        for (i=1; arr[i] !='\0' ; i++)
        {
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        remove_duplicate(arr);
    }
    
}

int main()
{
    char arr[100];
    cin>>arr;
    remove_duplicate(arr);
    cout<<arr<<endl;
    return 0;
}