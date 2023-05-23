#include<bits/stdc++.h>
using namespace std;
int main()
{
    char r;
    cin>>r;
    if(r>='a' && r<='z' || r>='A' && r<='Z')
    {
        cout<<"ALPHA"<<endl;
        if (r>='a' && r<='z')
        {
            cout<<"IS SMALL"<<endl;
        }
        else{
            cout<<"IS CAPITAL"<<endl;
        }
        
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}