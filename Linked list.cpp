#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *link;
};

node *head=NULL;

void insert(int item)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=item;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}

void insert_pos(int x,int item)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=item;
    ptr->link=NULL;
    temp=head;
    int c=1;
    while(c<x-1)
    {
        temp=temp->link;
        c++;
    }
    ptr->link=temp->link;
    temp->link=ptr;
}

void sorting()
{
    node *temp,*ptr;
    temp=head;
    for(temp=head ; temp!=NULL ; temp=temp->link)
    {
        for(ptr=temp->link ; ptr!=NULL ; ptr=ptr->link)
        {
            if(ptr->data<temp->data)
            {
                swap(ptr->data,temp->data);
            }
        }
    }
}

void delete_pos(int x)
{
    int i=0;
    node *temp,*ptr;
    ptr=head;
    temp=head;
    while(i<x-1)
    {
        ptr=temp;
        temp=temp->link;
        i++;
    }
    ptr->link=temp->link;
    delete temp;
}

void display()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        insert(x);
    }
    display();
    cout<<"Enter position and Data"<<endl;
    cin>>y;
    cin>>x;
    cout<<"After inserting at position "<<y<<endl;
    insert_pos(y,x);
    display();
    cout<<"Sorting of the linked list is : "<<endl;
    sorting();
    display();
    cout<<"Enter the delete position :"<<endl;
    cin>>x;
    delete_pos(x);
    display();
    /*
    also try :
     1> insert before position 
     2> insert after position
     3>insert at start
     4> delete before position
     5> delete after position
     6> delete at start
     7> delete at end
    */
}