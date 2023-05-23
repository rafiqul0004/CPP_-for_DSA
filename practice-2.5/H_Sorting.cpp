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
    for (int i = 0; i < r-1; i++)
    {
        for (int j = i+1; j <r; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
            

        }
        
    }
    for (int i = 0; i <r; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}