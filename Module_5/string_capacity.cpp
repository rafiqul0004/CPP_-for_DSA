#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r;
    cin>>r;
    cout<<r<<endl;
    cout<<r.size()<<endl;
    cout<<r.max_size()<<endl;
    cout<<r.capacity()<<endl;
    r.resize(3);
    cout<<r<<endl;
    r.resize(5,'X');
    cout<<r<<endl;
    if(r.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    r.clear();
    cout<<r<<endl;
    return 0;
}