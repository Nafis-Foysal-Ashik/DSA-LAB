#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void inst_sort(int a[],int n)
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        int temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            swap(a[j+1],a[j]);
            j--;
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
    inst_sort(a,n);
    for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}
