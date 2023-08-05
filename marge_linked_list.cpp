#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *link;
};

void insert(node **head,int item)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=item;
    ptr->link=NULL;
    if(*head==NULL)
    {
        *head=temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}

void marge(node **head1,node **head2,node **head3)
{
    node *temp,*ptr;
    temp=*head1;
    while(temp!=NULL)
    {
        
    }
}

void display(node **head)
{
    node *temp;
    temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int main()
{
    node *head1=NULL;
    node *head2=NULL;
    node *head3=NULL;
    int i,n,x,y;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        insert(&head1,x);
    }
    display(&head1);
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        insert(&head2,x);
    }
    display(&head2);
    marge(&head1,&head2,&head3);
}