#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertionAtHead(Node* &head, int d)
{
    Node* headNode= new Node(d);
    headNode->next=head;
    head->prev=headNode;
    head=headNode;
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* node3=new Node(30);
    node1->next=node2;
    node2->prev=node1;

    node2->next=node3;
    node3->prev=node2;

    Node* head= node1;
    insertionAtHead(head,5);
    insertionAtHead(head,7);
    insertionAtHead(head,9);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}