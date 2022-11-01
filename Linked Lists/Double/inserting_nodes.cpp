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

int main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    node1->next=node2;
    Node* node3=new Node(30);
    node2->next=node3;
    Node* ptr=node1;

    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}