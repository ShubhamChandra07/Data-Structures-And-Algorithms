//Program to insert node at the beginning of linked list
#include<iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int x;
};

void InsertAtHead(Node* &head, int x)
{
    
    Node* temp= new Node;
    temp->x=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void Print(Node* &head)
{
    Node* temphead=head;
    while(temphead!=NULL)
    {
        cout<<temphead->x<<"  ";
        temphead=temphead->next;
    }
}

int main()
{
    Node* head=NULL;
    int n,x;
    cout<<"Enter the total no. of elements you want to enter :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element: ";
        cin>>x;
        InsertAtHead(head, x);
        cout<<endl;
    }
    Print(head);


}
