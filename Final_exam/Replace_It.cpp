#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        while (s1.find(s2)!=-1)
        {
            s1.replace(s1.find(s2),s2.size(),"$");
        }
        cout<<s1<<endl;
        
    }
    
    return 0;
}