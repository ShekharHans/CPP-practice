#include<iostream>
using namespace std;

// *Using Stucture*
// struct empolyee
// {
//     int eId;
//     char favChar;
//     float salary;
// };                  



// int main()
// {
//     struct empolyee shekhar;
//     shekhar.eId =1;
//     shekhar.favChar='S';
//     shekhar.salary=10000;
//     cout<<shekhar.salary<<endl;
//     cout<<shekhar.favChar<<endl;
//     cout<<shekhar.eId<<endl;


// **Here we use typedef. As a result ,we can use 'ep' in the alternation word 'struct empolyee' [Shortcut methode]**

// typedef struct empolyee
// {
//     int eId;
//     char favChar;
//     float salary;
// }ep;                  

// int main()
// {
//     ep shekhar;
//     shekhar.eId =1;
//     shekhar.favChar='S';
//     shekhar.salary=10000;
//     cout<<shekhar.salary<<endl;
//     cout<<shekhar.favChar<<endl;
//     cout<<shekhar.eId<<endl;

// **Using union**

union money 
{
    int rice;
    char car;
    float pounds;
};






    return 0;
}