#include<iostream>
using namespace std;
// int length(char input[]){
//     int count=0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

int main()
{
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    char input[100];
    cout<<"Enter the element of array : "<<endl;
    // cin>>input;
    cin.getline(input,100);
    // input[4]='v';
    // input[3]='x';
    cout<<input<<endl;
    // cout<<length(input)<<endl;
    

    return 0;
}