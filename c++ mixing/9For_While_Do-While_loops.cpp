#include<iostream>

using namespace std;
int main()
{
    // *****Loops in C++*****
    /*There are three types of loops in C++
    1.For Loop
    2.While Loop
    3.Do-While Loop*/



// *****For Loop*****
    // int i=1;
    // cout<<i<<endl;
    // i++;
    
// Syntax of for loop

// for(initialization; condition; updation)
// {
//     loop body(C++ code)
// }
    // for (int i = 1; i <=20; i++)
    // {
    //     cout<<i<<endl;
    //     // i++;
    //     // i++;
    //     // i++;
    // }
    
    // Example of infinite for loop 
    // for (int i = 0; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //  While loop

    // Syntax of While loop
    // While(Condition):
    // {
    //     C++ statements;
    // }

    // Printing 1 to 40 using While Loop 
    // int i=1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of Infinite While Loop
    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // Do-While Loop 
    // Syntax:
    // do
    // {
    //     C++ Statement
    // } while ( condition );
    

    //  Printing 1 to 40 using While Loop 
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (false);

    // for loop 6 table 
    
    // for (int i = 1; i<=10; i++)
    // {
    //     cout<<i*6<<endl;
    // }
    
    // while loop 5 table 
// int i=1;
//     while ( i<=10)
//     {
//         cout<<i*5<<endl;
//         i++;
//     }
    

    // do-while loop 7 table 
    int i=1;
do
{
    cout<<i*7<<endl;
    i++;
} while (i<=10);
    return 0;
}