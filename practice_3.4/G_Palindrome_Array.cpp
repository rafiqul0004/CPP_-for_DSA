#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,f=1;
    cin>>r;
    int a[r];
    for (int i = 0; i < r; i++)
    {
        cin>>a[i];
    }
    int i,j;
    for (i = 0, j = r - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            f=0 ;// Not a palindrome
        }
    }
    if(f==0) cout<<"NO";
    else cout<<"YES";
    
    return 0;
}