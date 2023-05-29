#include<bits/stdc++.h>
using namespace std;

int maxx=50;
char stk[50];
int top=-1;

void push(char x)
{
    if(top==maxx-1)
    {
        cout<<"Overflow"<<endl;
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

int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*' || ch=='/')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string infix_to_postfix(string s)
{
    string str;
    str="";
   // push('(');
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            str+=s[i];
        }
        else if(s[i]=='(')
        {
            push(s[i]);
        }
        else if(s[i]==')')
        {
            while(stk[top]!='(')
            {
                str+=stk[top];
                pop();
            }
            pop();
        }
        else if(precedence(s[i])>precedence(stk[top]))
            {
                push(s[i]);
            }
            else
            {
            while(precedence(s[i])<=precedence(stk[top]))
            {
                str+=stk[top];
                pop();
            }
            push(s[i]);
            }
        }
    // while(stk[top]!='(')
    // {
    //     str+=stk[top];
    //     pop();
    // }
    return str;
}


int main()
{
    string s;
    cin>>s;
    cout<<infix_to_postfix(s)<<endl;
}