#include<iostream>
using namespace std;

int main()
{
    // int mathMarks[4];
    // mathMarks[0]=251;
    // mathMarks[1]=251;
    // mathMarks[2]=541;
    // mathMarks[3]=121;

    // cout<<"This are the math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

// You can change the value of an array 
    // int marks[4]={2,3,12,5};
    // marks[3]=121;
    // cout<<"This are the marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // *By using loop* 

    // int marks[4]={2,3,12,5};
    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<"This are the marks : "<<marks[i]<<endl;
    // }

    // int marks[4]={322 , 845, 455,582};
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"This are the another marks : "<<marks[i]<<endl;
    //     i++;
    // }
    
    // int marks[4]={322 , 845, 455,582};
    // int i=0;
    // do
    // {
    //     cout<<"This are the another marks : "<<marks[i]<<endl;
    //     i++;
    // }
    // while (i<4);

    // *POINTER AND ARRAY 
    // *****POINTER ARITHMETIC*****
    // Address(new) = Address(current) +i * sizeof(data type)

    int marks[4]={2,3,12,5};
    int* p = marks;
    // cout<<"The value of marks[0] is : "<<*p<<endl;
    // cout<<"The value of marks[2] is : "<<*(p+1)<<endl;
    // cout<<"The value of marks[3] is : "<<*(p+2)<<endl;
    // cout<<"The value of marks[4] is : "<<*(p+3)<<endl;
    

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

    
    
    
    return 0;
}