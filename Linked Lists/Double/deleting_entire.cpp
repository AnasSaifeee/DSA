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

void delete_entire(Node* head)
{
     Node* ptr=head;
     int count=1;
     while(count)
     { 
        ptr=head;
        head=head->next;
        count++;
     }
    
     head->prev=NULL;
     ptr->next=head->next;
    //  head->next->prev=ptr;
     head->next=NULL;

 
     
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* node3=new Node(30);
    Node* node4=new Node(40);
    Node* node5=new Node(50);
    node1->next=node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=node4;
    node4->prev=node3;
    node4->next=node5;
    node5->prev=node4;

    
    Node* head=node1;
    delete_entire(head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
