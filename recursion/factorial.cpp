#include <iostream>
using namespace std;
int factorial(int elem)
{
    if (elem == 0)  //Base case
    {
        return 1;
    }
    int smallOutput=factorial(elem-1);  //we assume that, for k=true
    int output=factorial(elem-1)*elem;  // Now we proof that k+1 is true;
    return output;
}
int main()
{
    int elem;
    cin >> elem;
    int output=factorial(elem);
    cout<<output<<endl;
    return 0;
}