#include<bits/stdc++.h>
using namespace std;

int maxx=50;
char stk[maxx];
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

}

int main()
{
    string s;
    cin>>>s;
    cout<<infix_to_postfix(s)<<endl;
}