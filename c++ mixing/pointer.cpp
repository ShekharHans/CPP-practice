#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << &i << endl; /* it shows the position of integer*/
    int *p = &i;
    cout << p << endl; /*it shows the poisition of pointer */ 
    cout << *p << endl; /*it shows the value of pointer */ 
    cout<<sizeof(p)<<endl; /* it shows the size of p*/ 
    cout<<"Hello world";
    
    return 0;
}
