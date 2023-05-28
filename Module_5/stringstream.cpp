#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r;
    getline(cin,r);
    stringstream ss(r);
    string word;
    int c=0;
    while (ss>>word)
    {
        cout<<word<<endl;
        c++;
    }
    cout<<c<<endl;
    return 0;
}