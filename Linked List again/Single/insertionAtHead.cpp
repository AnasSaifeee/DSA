#include<iostream>
using namespace std;
class Node{
   
   public:
   int data;
   Node* next;


   Node(int data){
    this->data=data;
    this->next=next;
   }
};


void insertAtHead(Node* &head, int d)
{
      Node* temp = new Node(d);
      temp->next=head;
      head=temp;
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
   Node* node1= new Node(10);
   Node* head=node1;

   insertAtHead(head,20);
   insertAtHead(head,30);
   insertAtHead(head,40);
   printList(head);
   
}   