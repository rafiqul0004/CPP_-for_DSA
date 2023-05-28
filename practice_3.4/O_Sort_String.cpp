#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    string a;
    for (int i = 0; i <r; i++)
    {
        cin>>a;
    }
    sort(a.begin(),a.end());
    cout<<a;
    return 0;
}