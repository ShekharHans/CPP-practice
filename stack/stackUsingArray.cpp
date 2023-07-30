#include <iostream>
using namespace std;
#include<climits>
class stackUsingArray
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    stackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    // return size
    int size()
    {
        return nextIndex;
    }
    // check empty or not
    bool isEmpty()
    {
        return nextIndex==0;
    }
    // insert element
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // delete element
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }
    // read top
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return data[nextIndex - 1];
    }
};

int main()
{
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}