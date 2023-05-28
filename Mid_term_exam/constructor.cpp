#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,char s,int c,char* n){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }
};
int main()
{
    Student r(12,'A',10,"Rafiqul");
    cout<<r.name<<endl;
    cout<<r.roll<<endl;
    cout<<r.cls<<endl;
    cout<<r.section<<endl;
    return 0;
}