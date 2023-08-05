#include<bits/stdc++.h>
using namespace std;

int top=-1;
int stk[10];

void push(int x)
{
    if(top==9)
    {
        cout<<"Cannot be pushed."<<endl;
    }
    else
    {
        top++;
        stk[top]=x;
    }
}

void pop()
{
    top--;
}

void peek()
{
    cout<<stk[top]<<endl;
}

bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if(top==9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void display()
{
    int i;
    for(i=0 ; i<=top ; i++)
    {
        cout<<stk[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int i,n,x;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        push(x);
    }
    display();
    //push(11);
    peek();
    pop();
    peek();
    display();
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    if(!isEmpty())
    {
        cout<<"Stack is not empty"<<endl;
    }
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
    }
    if(!isFull())
    {
        cout<<"Stack is not full"<<endl;
    }
}