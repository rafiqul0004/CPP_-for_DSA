#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    long long int mn=INT_MAX;
    for (int i = 0; i < t; i++)
    {
        cin>>r;
        int a[r];
        for (int i = 0; i < r; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = i+1; j <r; j++)
            {
                // if((a[i]+a[j]+j-i)<mn){
                //     mn=a[i]+a[j]+j-i;
                // }
                long long int sum= a[i]+a[j]+j-i;
                mn=min(sum,mn);
            }
            
        }
        cout<<mn<<endl;
    }
    
    return 0;
}