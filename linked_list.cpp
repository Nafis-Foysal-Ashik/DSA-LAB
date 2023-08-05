#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

void create(node **head,int x)
{
    class node *ptr,*temp;
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

void insert_at_beg(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=x;
    ptr->next=*head;
    *head=ptr;

}

void insert_at_end(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=x;
    ptr->next=NULL;
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}

void insert_at_pos(node **head,int i,int x)
{
    node *temp,*ptr;
    temp=*head;
    ptr=new node();
    ptr->data=x;
    ptr->next=NULL;
    int j=1;
    while(j<i-1)
    {
        temp=temp->next;
        j++;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}

void insert_data(node **head,int x)
{
    node *temp,*ptr;
    ptr=new node();
    ptr->data=x;
    ptr->next=NULL;
    temp=*head;
    while(x!=temp->data)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}

void get_len(node *head)
{
    node *temp;
    temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    cout<<l<<endl;
}

void del_beg(node **head)
{
    node *temp;
    temp=*head;
    *head=temp->next;
    delete temp;
}

void del_end(node **head)
{
    node *temp,*ptr;
    temp=*head;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    delete temp;
}

void del_at_pos(node **head, int pos)
{
    node *temp,*ptr;
    int i=1;
    temp=*head;
    while(i<pos)
    {
        ptr=temp;
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    delete temp;
}
void reverse_linked_list(node **head)
{
    node *past,*present,*future;
    past=NULL;
    present=*head;
    future=*head;
    while(future!=NULL)
    {
        future=future->next;
        present->next=past;
        past=present;
        present=future;
    }
    *head=past;
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
    class node *head=NULL;
    int i,n,x;
    cin>>n;
    for(i=0; i<n ; i++)
    {
        cin>>x;
        create(&head,x);
    }
    cout<<"The created linked list : "<<endl;
    display(head);
    /*
    cout<<"Insert at beginning : "<<endl;
    cin>>x;
    insert_at_beg(&head,x);
    display(head);
    cout<<"Insert at the end : "<<endl;
    cin>>x;
    insert_at_end(&head,x);
    display(head);
    cout<<"Insert at postion : "<<endl;
    cin>>i;
    cout<<"Enter data : "<<endl;
    cin>>x;
    insert_at_pos(&head,i,x);
    display(head);
    cout<<"Insert at any given data : "<<endl;
    cin>>x;
    insert_data(&head,x);
    display(head);
    cout<<"Length of the linked list : ";
    get_len(head);
    */
   /*
   cout<<"Delete from begninning : "<<endl;
    del_beg(&head);
    display(head);
    cout<<"Delete from end : "<<endl;
    del_end(&head);
    display(head);
    cout<<"Enter the position you want to delete : "<<endl;
    cin>>x;
    del_at_pos(&head,x);
    display(head);
    reverse_linked_list(&head);
    display(head);
   */
}