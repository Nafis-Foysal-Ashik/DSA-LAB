#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void sel_sort(int a[],int n)
{
    int i,j,min;
    for(i=0 ; i<(n-1) ; i++)
    {
        min=i;
        for(j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min != i)
        {
            swap(&a[min],&a[i]);
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    sel_sort(a,n);
    for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}
