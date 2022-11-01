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



void delete_end(Node** head)
{
    Node* ptr1=*head;
    Node* ptr2=*head;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    
    ptr2->next=NULL;
    free(ptr1);
    ptr1=NULL;
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

 

    delete_end(&head);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

}