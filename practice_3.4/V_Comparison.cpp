#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char r;
    cin>>a>>r>>b;
    if(r=='>'){
        if(a>b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    if(r=='<'){
        if(a<b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    if(r=='='){
        if(a==b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}