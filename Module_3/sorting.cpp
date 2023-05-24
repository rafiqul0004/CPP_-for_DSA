#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int a[r];
    for (int i = 0; i <r; i++)
    {
        cin>>a[i];
    }
    sort(a,a+r);
    for (int i = 0; i <r; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+r,greater<int>());
    for (int i = 0; i <r; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}