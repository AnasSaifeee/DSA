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

Node* add_pos(Node* head,int data,int pos)
{
    Node* node_pos=new Node(data);
    int count=1;

   while(count<pos-1)
   {
      head=head->next;
      count++;
   }
   node_pos->next=head->next;
   head->next->prev=node_pos;
   node_pos->prev=head;
   head->next=node_pos;

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
    add_pos(head,100,3);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
