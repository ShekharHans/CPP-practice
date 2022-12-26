// *****Besic Control Stucture*****
// 1.Sequence Stucture
// 2.Selection Stucture
// 3.Loop Stucture

#include<iostream>

using namespace std;
int main()
{
    // *****Selection Control Stucture : If else-if else ladder*****
    int age;
    cout<<"Tell me your age"<<endl;
    cin>> age;
    // if((age<18)&&(age>6))
    // {
    //     cout<<"You can't come to my party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"You are a kid and you will get a kid pass to the party "<<endl;
    // }
    // else if(age<5)
    // {
    //     cout<<"You are not yet born"<<endl;
    // }
    // else
    // {
    //     cout<<"You can come to the party"<<endl;
    // }


    // *****Selection Control Stucture : Switch Case Statement*****
    switch (age)
    {
    case 18:
        
        cout<<"You are 18"<<endl;
        break;
    
    case 22:

        cout<<"You are 22"<<endl;
        break;
    
    case 2:
        
        cout<<"You are 2"<<endl;
        break;
    
    default:
    cout<<" No special cases"<<endl;
        break;
    }
    cout<<"Done with Switch case";

    return 0;
}