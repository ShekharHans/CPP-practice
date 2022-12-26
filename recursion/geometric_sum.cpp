#include<iostream>
#include<cmath>
using namespace std;
double geo_sum(double k){
    if (k<=0)
    {
        return 1;
    }
    double sum=1/pow(2,k);
    return sum+geo_sum(k-1);

    

} 

int main()
{
    double k;
    cin>>k;
    double output=geo_sum(k);
    cout<<output<<endl;
    return 0;
}