#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int a[r];
    for (int i = 0; i < r; i++)
    {
        cin>>a[i];
    }
    int m=INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if(a[i]>m){
            m=a[i];
        }
    }
    cout<<m<<endl;
    return 0;
}