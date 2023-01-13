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

int size(Node* &head)
{
    Node* ptr=head;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count/2;
}

void deletionAtMiddle(Node* &head,int pos)
{
    Node* ptr1=head;
    Node* ptr2;
    while(pos>1)
    {
        pos--;
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=ptr1->next;
    ptr1->next=NULL;
 

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
    Node* node4=new Node(40);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    Node* head= node1;
    int mid=size(head);
    deletionAtMiddle(head,mid);
    printList(head);
}
