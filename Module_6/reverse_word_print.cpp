#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss)
{
    string word;
    if(ss>>word)
    {
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string r;
    getline(cin,r);
    stringstream ss(r);
    print(ss);
    return 0;
}