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


Node* insertion(Node* tail,int element,int data)
{
      if(tail==NULL)
      {
        Node* node = new Node(data);
        tail=node;
        node->next=node;
      }
      else
      {
        while(tail->data!=element)
        {
            tail=tail->next; 
        }
        Node* node2=new Node(data);
        
      }
      return tail;
}

void print(Node* tail)
{
    Node* temp=tail;
    do
    {
      cout<<tail->data<<endl;
      tail=tail->next;
    } while (tail!=temp);
    
}

int main()
{
    Node* tail=NULL;
    tail=insertion(tail,5,3);
    print(tail);

}
