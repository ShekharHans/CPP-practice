#include<iostream>
using namespace std;

int main()
{
    int *p= new int;//create memory in heap
    *p=10;
    cout<<*p<<endl;
    if(*p=10){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    delete p; //single element memory deletation
    cout<<*p<<endl;

    // array create  
    int n;
    cin>>n;
    int *pa = new int[n] ; 
    for (int i = 0; i < n; i++)
    {
        cin>>pa[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<pa[i]<<endl;
    }
    delete [] pa; //to deletation  array memory
    


    
    
    
        return 0;
}