#include<iostream>
using namespace std;
bool func_prime(int n){
    int d=2;
    bool divided = false;
    while (d<n){
        if (n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    bool ans =func_prime(31);;
    cout<<ans<<endl;
    bool ans1 =func_prime(85);
    cout<<ans1<<endl;

    return 0;
}