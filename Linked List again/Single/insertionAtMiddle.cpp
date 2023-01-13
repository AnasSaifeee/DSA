#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int size(Node *&head)
{
    Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }

    return count/2;
}

void insertAtTail(Node *&head, int d)
{
    Node *temp = new Node(d);
    Node *ptr1 = head;
    Node *ptr2;
    while (ptr1 != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }
    ptr2->next = temp;
}

void insertAtMiddle(Node* &head,int d,int pos)
{
    Node* MidNode= new Node(d);
    Node* ptr1= head;
    Node* ptr2;
    while(pos!=0)
    {
        pos--;
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=MidNode;
    MidNode->next=ptr1;
}

void printList(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    node1->next = node2;
    node2->next = node3;
    Node *head = node1;
    // insertAtTail(head, 50);
    int mid = size(head);
    insertAtMiddle(head,100,mid);
    printList(head);
}