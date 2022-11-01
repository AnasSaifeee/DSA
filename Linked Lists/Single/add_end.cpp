#include<iostream>
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

void add_end(Node* head,int data)
{
    Node* node_end=new Node(data);
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=node_end;

}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    node1->next=node2;
    Node* node3=new Node(30);
    node2->next=node3;
    Node* head=node1;
    add_end(head,40);

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;

    }
}
