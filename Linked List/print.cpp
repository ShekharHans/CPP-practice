// print 5 numbers by using linked list
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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // * statically
    // Node n1(10);
    // Node *head = &n1;
    // Node n2(12);
    // Node n3(15);
    // Node n4(20);
    // Node n5(85);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // print(head);
    // * dynamically
    Node *n1 = new Node(10);
    Node *head =n1;
    Node *n2 = new Node(25);
    Node *n3 = new Node(35);
    Node *n4 = new Node(15);
    Node *n5 = new Node(85);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    print(head);

    return 0;
}