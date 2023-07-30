#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constuctor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *temp=head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // * Statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    // cout<<n1.data<<n2.data<<n3.data<<n4.data<<n5.data<<endl;
    print(head);
    // cout<<head->data<<endl;
    // * Dynamically
    // Node *n3=new Node(2);
    // Node *head=n3;
    // Node *n4=new Node(7);
    // n3->next=n4;
    // cout<<n3->data<<" "<<n4->data<<endl;
    // cout<<head->data<<endl;
    return 0;
}