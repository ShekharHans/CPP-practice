#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << &i << endl;
    int *p = &i;
    cout << p << endl;
    float f=10.2;
    float *pf=&f;
    cout<<pf<<endl;
    double d=126.23;
    double *pd=&d;
    cout<<pd<<endl;

    return 0;
}