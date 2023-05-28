#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r;
    // string::iterator it;
    cin>>r;
    cout<<*r.begin()<<endl;
    cout<<*(r.end()-1)<<endl;
    for ( auto it = r.begin(); it <r.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}