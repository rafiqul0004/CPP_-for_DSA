#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int c=0;
    while (ss>>word)
    {
        if(word=="Ratul")
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}