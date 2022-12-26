#include<iostream>
using namespace std;
void remove(char str[]){
    if (str[0]=='\0')
    {
        return ;
    }
    
    if (str[0]!='x')
    {
        remove(str+1);
    }
    else
    {
        int i ;
        for (i=1; str[i] !='\0' ; i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        remove(str);
        
    }
}
int length_main(char str[]){
    if (str[0]=='\0')
    {
        return 0;
    }
    int count=0;
    
    if (str[0]!=1)
    {
        count++;
    }
    int smalloutput1=length_main(str+1);
    int output1=count+smalloutput1;
    return output1;
    
}
int length(char str[]){
    if (str[0]=='\0')
    {
        return 0;
    }
    int count=0;
    remove(str);
    if (str[0]!=1)
    {
        count++;
    }
    int smalloutput=length(str+1);
    int output=count+smalloutput;
    return output;
    
}

int main()
{
    char str[100];
    cin>>str;
    int output1=length_main(str);
    cout<<output1<<endl;
    remove(str);
    int output=length(str);
    cout<<str<<endl;
    cout<<output<<endl;
    return 0;
}