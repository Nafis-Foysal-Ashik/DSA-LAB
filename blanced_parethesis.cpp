#include<bits/stdc++.h>
using namespace std;

int top=-1;
char stk[10];

void push(char ch)
{
    top++;
    stk[top]=ch;
}

void pop()
{
    top--;
}

bool isBalanced()
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

int main()
{
    int i;
    string str;
    cin>>str;
    for(i=0 ; i<str.length() ; i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            push(str[i]);
        }
        else if((str[i]==')' && stk[top]=='(')||(str[i]=='}' && stk[top]=='{') ||(str[i]==']' && stk[top]=='['))
        {
            pop();
        }
    }
    if(isBalanced())
    {
        cout<<"Balanced parenthesis"<<endl;
    }
    else
    {
        cout<<"Not balanced parenthesis"<<endl;
    }
}