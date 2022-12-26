void reverseString(char input[])
{
    int len = length(input);
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}