#include<bits/stdc++.h>
using namespace std;

bool sort1(int input[],int size){
    if (size==0||size==1)   
    {
        return true;
    }
    bool is_sorted=sort1(input+1,size-1);
    if (!is_sorted)
    {
        return false;
    }
    
    if (input[0]>input[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}
/*

bool sort(int input[],int size){
    if (size==0||size==1)
    {
        return true;
    }
    if (input[0]>input[1])
    {
        return false;
    }
    bool is_sorted=sort(input+1,size-1);
    
    return is_sorted;
}*/

int main()
{
    int size;
    cin>>size;
    int input[100];
    for (int i = 0; i < size; i++)
    {
        // int data;
        cin>>input[i];
        // v.push_back(data);
    }
    cout<<sort1(input,size)<<endl;
    
    return 0;
}