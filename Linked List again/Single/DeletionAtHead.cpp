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

void printList(Node* &head)
{
      Node* ptr=head;
      while(ptr!=NULL)
      {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
      }
}

void deletionAtHead(Node* &head)
{
    Node* ptr= head;
    head=head->next;
    ptr->next=NULL;
    free(ptr);
}

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* node3=new Node(30);
    Node* node4=new Node(40);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    Node* head= node1;
    deletionAtHead(head);
    deletionAtHead(head);
    printList(head);
}
