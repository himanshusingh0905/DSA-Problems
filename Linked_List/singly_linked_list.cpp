#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// 1.  Insertion at front of a linked list:
void insertionAtFront(int value,Node* &head)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// 2.  Insertion at the end of a linked list:
void insertAtEnd(int value,Node* &head)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode; 
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}
void display(Node* head)
{
    Node* head1 = head;
    while(head1 != NULL)
    {
        cout<<head1->data<<"->";
        head1 = head1->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
   Node* head = NULL;
   insertionAtFront(5,head);
   insertionAtFront(9,head) ;
   insertionAtFront(8,head) ;
   display(head);
}