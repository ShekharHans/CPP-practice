#include<iostream>
using namespace std;
// void minDis(int a[],int n,int x,int y){
//     int c1,c2;
//     int i,j;
//     for ( i = 0; i < n; i++)
//     {
//         if (a[i]==x)
//         {
//             c2=i;
//         }
        
//     }
//     for ( j = 0; j < n; j++)
//     {
//         if (a[j]==y)
//         {
//             c2=j;
//         }
        
//     }
//     cout<<c2-c1<<endl;
    

    
    
// }
int main()
{
    int a[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int x,y;
    cin>>x>>y;
    // minDis(a,n,x,y);
    // int c1,c2;
    int i,j;
    for ( i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            // c2=i;
        }
        
    }
    for ( j = 0; j < n; j++)
    {
        if (a[j]==y)
        {
            c2=j;
        }
        
    }
    cout<<c2-c1<<endl;
    return 0;
}