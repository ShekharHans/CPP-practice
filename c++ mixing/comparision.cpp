#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the three numbers : "<<endl;
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"They are equal"<<endl;
    }
    else{
        cout<<"They are not equal"<<endl;
    }
    if(a<b&&b>c)
    {
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"They are not greater"<<endl;
    }
    if(a==b||b>c)
    {
        cout<<"One condition is true "<<endl;
    }
    else{
        cout<<"They are not true"<<endl;
    }
    return 0;
}