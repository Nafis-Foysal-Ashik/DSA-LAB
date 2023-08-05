#include<bits/stdc++.h>
using namespace std;

int maxx=50;
int top=-1;
char stk[50];

void push(char x)
{
    if(top==maxx-1)
    {
        cout<<"Over flow condition"<<endl;
    }
    else
    {
        top++;
        stk[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Under flow conditon"<<endl;
    }
    else
    {
        top--;
    }
}

bool check_brackets()
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
    string s;
    cin>>s;
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            push(s[i]);
        }
        else if ((stk[top]=='(' && s[i]==')' ) || (stk[top]=='[' && s[i]==']'  )|| (s[i]=='}' && stk[top]=='{'))
        {
            pop();
        
        }
    }
    if(check_brackets())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }
}