#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main()
{
    int t;
    cin>>t;
    Students r[t];
    for (int i = 0; i <t; i++)
    {
        cin>>r[i].nm>>r[i].cls>>r[i].s>>r[i].id;
    }
    int j=t-1;
    for (int i =0; i<t; i++)
    {
        cout<<r[i].nm<<" "<<r[i].cls<<" "<<r[i].s<<" "<<r[j].id<<endl;
        j--;
    }  
    return 0;
}