#include <iostream>
using namespace std;
#include <climits>
class stackUsingArray
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    // instuctor
    stackUsingArray(int totalSize)
    {
        data = new int[nextIndex];
        nextIndex = 0;
        capacity = totalSize;
    }
    // size
    int size()
    {
        return nextIndex;
    }
    // check empty
    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // insert element
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack is Full" << endl;
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
            cout << "stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    // check top
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
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
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}