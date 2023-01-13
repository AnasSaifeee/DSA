#include <iostream>
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

void insertAtTail(Node* &head,int d)
{
   Node* temp= new Node(d);
   Node* ptr1= head;
   Node* ptr2;
   while(ptr1->next!=NULL)
   {
    ptr1=ptr1->next;
   }
   ptr1->next=temp;

}

void printList(Node* &head)
{    
      Node* ptr=head;
      while(ptr!=NULL)
      {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
      }
}
int main()
{
   Node* node1=new Node(10);
   Node* node2=new Node(20);
   Node* node3=new Node(30);
   node1->next=node2;
   node2->next=node3;
   Node* head=node1;
   insertAtTail(head,50);
   insertAtTail(head,40);
  printList(head);

}