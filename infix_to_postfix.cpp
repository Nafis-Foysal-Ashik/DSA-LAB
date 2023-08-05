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

string in_to_post(string s)
{
    string str="";
    int i;
    push('(');
    for(i=0 ; i<s.length() ; i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            str+=s[i];
        }
        else if(s[i]=='^')
        {
            push(s[i]);
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
        else
        {
            if(precedence(s[i])>precedence(stk[top]))
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
            }
        }
    }
    while(stk[top]!='(')
    {
        str+=stk[top];
        pop();
    }
    cout<<stk[top]<<endl;;
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<"Postfix Expression of the string : "<<str<<" is :"<<in_to_post(str)<<endl;
}