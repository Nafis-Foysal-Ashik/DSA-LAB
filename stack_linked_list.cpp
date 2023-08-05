#include<bits/stdc++.H>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void push(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=x;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=temp=ptr;
    }
    else
    {
        temp->next=ptr;
        temp=ptr;
    }
}

void pop(node **head)
{
    node *temp,*ptr;
    temp=*head;
    if(*head==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        delete temp;
    }
}

void display(node *head)
{
    node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main()
{
    node *head=NULL;
    int i,n,x;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        push(&head,x);
    }
    cout<<"The element of stack is : "<<endl;
    display(head);
    cout<<"After pop an element : "<<endl;
    pop(&head);
    display(head);
}