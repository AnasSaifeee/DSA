#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node* reverse (Node* head)
{
    Node* ptr1=NULL;
    Node* ptr2=NULL;

    while(head!=NULL)
    {
        ptr2=head->next;
        head->next=ptr1;
        ptr1=head;
        head=ptr2;
    }
    head=ptr1;
    return head;



    
     
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* node3=new Node(30);
    Node* node4=new Node(40);
    Node* node5=new Node(50);
    Node* node6=new Node(60);

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
   
    Node* head=node1;
   head=reverse(head);
   
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

}