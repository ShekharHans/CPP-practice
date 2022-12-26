#include <iostream>
using namespace std;
int length(char input[])
{
    char count = 0;
    for (int i = 0; input[i] != 0; i++)
    {
        count++;
    }
    return count;
}
void reverseWord(char input[])
{

}
void reverseString(char input[])
{
    int len=length(input);
    int i=0,j=len-1;
    while(i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    
}
void wordreverse(char input[]){
    
    int s;
    for (int  i = 0; i < length(input); i++)
    {
        
        if (input[i]<' ')
        {
            s=input[i]+s;
        }
        else
        {
            cout<<s<<" ";
        }
        
        
    }
    cout<<s;
    }
    


int main()
{
    char input[100];
    cout << "Enter the string : " << endl;
    cin.getline(input, 100);
    reverseString(input);
wordreverse(input);
    cout << input << endl;

    return 0;
}