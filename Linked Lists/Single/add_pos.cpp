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


void add_pos(Node* head,int data,int pos)
{
    Node* middle = new Node(data);
    pos--;
    while(pos!=1)
    {
        head=head->next;
        pos--;
    }
    middle->next=head->next;
    head->next=middle;
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    node1->next=node2;
    Node* node3=new Node(30);
    node2->next=node3;
    Node* head=node1;
    int pos=3;
   add_pos(head,50,3);

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;

    }
}
