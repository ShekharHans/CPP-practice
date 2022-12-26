#include<iostream>
using namespace std;
int total(int elem){
    if (elem==0)
    {
        return 0;
    }
    int smallOutput=total(elem-1);
    int output=smallOutput+elem;
    return output;
    
}

int main()
{
    int elem;
    cin>>elem;
    int output=total(elem);
    cout<<output<<endl;
    return 0;
}