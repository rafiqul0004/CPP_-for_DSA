#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
        string nm;
        int cls;
        char s;
        int math_marks;
        int eng_marks;
};
int main()
{
    int t;
    cin>>t;
    Students r[t];
    for (int i = 0; i <t; i++)
    {
        cin>>r[i].nm>>r[i].cls>>r[i].s>>r[i].math_marks>>r[i].eng_marks;
    }
    for (int i = t-1; i>=0; i--)
    {
        cout<<r[i].nm<<" "<<r[i].cls<<" "<<r[i].s<<" "<<r[i].math_marks<<" "<<r[i].eng_marks<<endl;
    }  
    return 0;
}