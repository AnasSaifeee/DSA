#include<iostream>
using namespace std;



class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void count_node(Node* head)
{ 
       int count=0;
      while(head!=NULL)
       {
        count++;
        head=head->next; 
       }
       cout<<count<<endl;
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    node1->next=node2;
    Node* node3=new Node(30);
    node2->next=node3;
    Node* head=node1;
  
  count_node(head);
   
}