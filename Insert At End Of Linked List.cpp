//Program to insert elements at the end of the linked list and print them
#include <iostream>
using namespace std;

 class Node
 {
     public:
     int data;
     Node* next;
 };
 

 void InsertEnd(int x, Node* &head)
 {
     Node* temp= new Node;
     Node* tempHead= head;
     temp->data=x;
     temp->next=NULL;
     if(head==NULL)
     {
        head=temp;
        return;
     }
     while(tempHead->next!=NULL)
     {
         tempHead=tempHead->next;
     }
     tempHead->next=temp;

 }


 void Print(Node* &head)
 {
     Node* temp=head;
     cout<<"Linked List is:  ";
     while(temp!=NULL)
     {
         cout<<temp->data<<"  ";
         temp=temp->next;
     }
     cout<<endl;
 }

 int main()
 {
     int n,x;
     Node* head=NULL;
     cout<<"Enter total no. of elements you want to enter:  ";
     cin>>n;

     for(int i=0; i<n; i++)
     {
         cout<<"Enter the element ";
         cin>>x;
         InsertEnd(x,head);
         cout<<"  ";
     }
     Print(head);
 }
