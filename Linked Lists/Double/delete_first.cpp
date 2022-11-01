#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

Node* delete_first(Node* head)
{
     Node* ptr=head;
     head=head->next;
     head->prev=NULL;
     ptr->next=NULL;
     free(ptr);
     return head;
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

    
    Node* head=node1;
    head= delete_first(head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
