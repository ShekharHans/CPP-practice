#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[50];
    char name1[50];
    cin.getline(name,50);
    cin.getline(name1,50);
    int n;
    cin>>n;
    // strcpy(name1,name);
    // strcpy(name1,"hello");
    // cout<<"input1 : "<<name<<endl;
    // cout<<"input2 : "<<name1<<endl;
    strncpy(name1,name,n);
    cout<<"input1 : "<<name<<endl;
    cout<<"input2 : "<<name1<<endl;
    /*if (strcmp(name,name1)==0)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    cout<<copy<<endl;
    
    //     int com=strcmp(name,name1);
    // cout<<com<<endl;
    int len=strlen(name);
    cout<<"length : "<<len<<endl;*/

    return 0;
}