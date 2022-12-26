#include<iostream>
using namespace std;
void printArray(int a[][5],int m,int n){
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
// void printArray(int a[][50],int m,int n){
    
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }


int main()
{
    int a[][5]={{1,2,3},{4,5,6},{7,8,9}};
    
    // int a[50][50];
    // int m,n;
    // cout<<"Enter the value of row and coloumn"<<endl;
    // cin>>m>>n
    
    // cout<<"Enter the element of array : "<<endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin>>a[i][j];
    //     }
        
    // }

    printArray(a,3,5);
    
    return 0;
}