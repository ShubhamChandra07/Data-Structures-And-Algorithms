#include <iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int x;
};

void InsertEnd(int x, Node* &head)
{
    Node* temphead=head;
    Node* temp= new Node;
    temp->x=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(temphead->next!=NULL)
    {
        temphead=temphead->next;
    }
    temphead->next=temp;
    
}

void DeleteNode(int n, Node* &head)
{
    Node* temphead=head;
    Node* tempptr=NULL;
    for(int i=0; i<n-2; i++)
    {
        temphead=temphead->next;
    }
    tempptr=temphead->next;
    temphead->next=tempptr->next;
    delete tempptr;


}

void Print(Node* &head)
{
    Node* tempptr=head;
    while(tempptr!=NULL)
    {
        cout<<tempptr->x<<"  ";
        tempptr=tempptr->next;
    }

}

int main()
{
    int x,n,totalElements;
    Node* head=NULL;
    cout<<"Enter total number of elements: ";
    cin>>totalElements;
    for(int i=0; i<totalElements; i++)
    {
        cout<<"Enter element: ";
        cin>>x;
        InsertEnd(x, head);
        cout<<endl;
    }
    cout<<"Elements of node are: ";
    Print(head);

    cout<<endl<<"Enter the position of element which you want to delete :";
    cin>>n;
    DeleteNode(n,head);

    cout<<endl<<"Linked list after deletion of element:  ";
    Print(head);
}
