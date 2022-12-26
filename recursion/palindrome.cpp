#include <iostream>
using namespace std;
int length(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }
    // int count =0; 
    // if (str[0]!='\0')
    // {
    //     count++;
    // }
    int totalLength = length(str + 1) + 1;
    return totalLength;
}

bool palindrome(char str[], int start, int end)
{
    if (start == end || str[0] == '\0')
    {
        return true;
    }

    if (str[start] == str[end] && palindrome(str, start + 1, end - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool palindromeHelper(char str[])
{
    if (palindrome(str, 0, length(str) - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    char str[100];
    cin >> str;
    cout << length(str) << endl;
    cout<<palindromeHelper(str)<<endl;


    return 0;
}