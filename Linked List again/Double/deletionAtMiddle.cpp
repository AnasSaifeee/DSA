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

void deletionAtMiddle(Node* &head,int pos)
{
    Node* ptr1=head;
    Node* ptr2;
    while(pos>1)
    {
        pos--;
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=ptr1->next;
    ptr1->next=NULL;
    ptr1->prev=NULL;
    
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
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}