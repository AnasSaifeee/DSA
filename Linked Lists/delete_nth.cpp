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

void delete_nth(Node** head,int pos)
{
    if(pos==1)
    {
        Node* temp=*head;
        *head=temp->next;
        temp->next=NULL;
        free(temp);
    }

    else
    {
        int count=1;
        Node* previous=*head;
        Node* current=*head;
        while(count<pos)
        {
            previous=current;
            current=current->next;
            count++;
        }
        previous->next=current->next;
        current->next=NULL;
  
    }
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

   delete_nth(&head,5);
   

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

}