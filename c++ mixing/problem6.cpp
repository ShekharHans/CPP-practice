#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    // if(b<c)
    // {
    //     cout<<"C is Greater"<<endl;
    // }
    // else{
    //     if (a>b)
    //     {
    //     cout<<"A is Greater"<<endl;
    //     }
    //     else{
    //         cout<<"B is Greater";
    //     }
        
    // }
    if (b<c)
    {
        cout<<"C is Greater"<<endl;
    }
    else if (a>b)
    {
        cout<<"A is Greater"<<endl;
    }
    else    
    {
        cout<<"B is Greater";
    }
    
    
    


    return 0;
}