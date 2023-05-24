#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int *a=new int [r];
    for (int i = 0; i <5; i++)
    {
          cin>>a[i];
    }
    int d;
    cin>>d;
    int *b=new int [d];
    for (int i = 0; i <d; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i <d-sizeof(a); i++)
    {
        int k;
        cin>>k;
        b[r]=k;
        r++;
    }
    delete []a;
    for (int i = 0; i <d; i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}