#include<bits/stdc++.h>
using namespace std;
void swp(int &a , int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void sel_min_max(int a[], int n, int &min, int &max)
{
    min = max = 0;
    for (int i = 1; i < n; i++)
        {
        if (a[i] < a[min]) {
            min = i;
        }
        if (a[i] > a[max]) {
            max = i;
        }
    }
}

void min_max(int a[], int n) {
    for (int i = 0; i < n/2; i++)
        {
        int min, max;
        sel_min_max(a + i, n - 2*i, min, max);
        min += i;
        max += i;
        swap(a[i], a[min]);
        if (max == i) {
            max = min;
        }
        swap(a[n - 1 - i], a[max]);
    }
}
int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    min_max(a , n) ;
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " " ;
    }
}
