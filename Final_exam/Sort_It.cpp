#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total;
};
bool cmp(Students a,Students b)
{
    if(a.total!=b.total)
    {
         return a.total>b.total;
    }
    else{
        return a.id<b.id;
    }
}
int main()
{
    int t;
    cin>>t;
    Students r[t];
    for (int i = 0; i <t; i++)
    {
        cin>>r[i].nm>>r[i].cls>>r[i].s>>r[i].id>>r[i].math_marks>>r[i].eng_marks;
        r[i].total=r[i].math_marks+r[i].eng_marks;
        cin.ignore();
    }    
    sort(r,r+t,cmp);
    for (int i =0; i<t; i++)
    {
        cout<<r[i].nm<<" "<<r[i].cls<<" "<<r[i].s<<" "<<r[i].id<<" "<<r[i].math_marks<<" "<<r[i].eng_marks<<endl;
    }  
    return 0;
}