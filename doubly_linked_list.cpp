#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *prev;
    node *next;
};

void insert(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->prev=NULL;
    ptr->data=x;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=temp=ptr;
    }
    else
    {
        temp->next=ptr;
        ptr->prev=temp;
        temp=ptr;
    }
}

void reverse(node *head)
{
    node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp->prev!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data;
    cout<<endl;
}

void insert_beg(node **head,int x)
{
    node *ptr,*temp;
    ptr=new node();
    ptr->prev=NULL;
    ptr->next=NULL;
    ptr->data=x;
    temp=*head;
    ptr->next=temp;
    temp->prev=ptr;
    *head=ptr;
}

void insert_at_pos(node **head,int pos,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->prev=NULL;
    ptr->data=x;
    ptr->next=NULL;
    temp=*head;
    int j=1;
    while(j<pos-1)
    {
        j++;
        temp=temp->next;
    }
    ptr->next=temp->next;
    ptr->prev=temp;
    temp->next=ptr;
    ptr->next->prev=ptr;
}

void insert_at_end(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->prev=NULL;
    ptr->data=x;
    ptr->next=NULL;
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
}

void del_beg(node **head)
{
    node *temp,*ptr;
    temp=*head;
    ptr=temp->next;
    *head=ptr;
    delete temp;
}

void del_at_pos(node **head,int pos)
{
    int i=1;
    node *temp,*ptr;
    temp=*head;
    while(i<pos)
    {
        ptr=temp;
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    temp->next->prev=ptr;
    delete temp;
}

void del_at_end(node **head)
{
    node *temp,*ptr;
    temp=*head;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    temp->prev=NULL;
    ptr->next=NULL;
    delete temp;
}

void check_pal(node *head)
{
    node *temp,*ptr;
    temp=ptr=head;
    int l=1,c=0,i;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        l++;
    }
    for(i=0 ; i<l/2 ; i++)
    {
        if(ptr->data==temp->data)
        {
            c++;
            ptr=ptr->next;
            temp=temp->prev;
        }
        else
        {
            break;
        }
    }
    if(c==l/2)
    {
        cout<<"The list is palindrome"<<endl;
    }
    else
    {
        cout<<"The list is not palindrome"<<endl;
    }
}


void display(node *head)
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    display(head);
    /*
    cout<<"Reverse of a linked list : "<<endl;
    reverse(head);
    cout<<"Insert at begninning : "<<endl;
    cin>>x;
    insert_beg(&head,x);
    display(head);
    cout<<"Insert at position and data :"<<endl;
    cin>>i>>x;
    insert_at_pos(&head,i,x);
    display(head);
    cout<<"Insert at the end : "<<endl;
    cin>>x;
    insert_at_end(&head,x);
    display(head);
    */
    /*
    cout<<"Delete from begninning : "<<endl;
    del_beg(&head);
    display(head);
    cout<<"Delete from position : "<<endl;
    cin>>x;
    del_at_pos(&head,x);
    display(head);
    del_at_end(&head);
    display(head);
    */
    cout<<"Check palindrome : "<<endl;
    check_pal(head);
}