#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Rafiqul ";
    string b="Rahat";
    a+=b;
    cout<<a<<endl;
    b.push_back('A');
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;
    a.erase(5);
    cout<<a<<endl;
    a.erase(4,1);
    cout<<a<<endl;
    a.replace(4,0,"Rahat");
    cout<<a<<endl;
    a.insert(3,"Rahat");
    cout<<a<<endl;
    return 0;
}