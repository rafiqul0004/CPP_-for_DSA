#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char r,s;
    cin>>a>>r>>b>>s>>c;
    if(r=='+'){
        if(a+b==c){
            cout<<"Yes";
        }
        else cout<<a+b;
    }
     if(r=='-'){
        if(a-b==c){
            cout<<"Yes";
        }
        else cout<<a-b;
    }
     if(r=='*'){
        if(a*b==c){
            cout<<"Yes";
        }
        else cout<<a*b;
    }
    return 0;
}