#include<bits/stdc++.h>
using namespace std;

class node
{
    public: 
    int data;
    node *next;
};

void insert(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->next=*head;
    ptr->data=x;
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

void display(node *head)
{
    node *temp;
    temp=head;
    while(temp->next!=head)
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
        insert(&head,x);
    }
    cout<<"The list is : "<<endl;
    display(head);
}