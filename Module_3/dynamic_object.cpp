#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,char s,int c,char n[100]){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }

};
int main()
{
    char name[100]="Rafiqul islam";
    Student* r= new Student(12,'A',6,name);
    cout<<(*r).name<<endl;
    cout<<r->cls<<endl;
    cout<<r->roll<<endl;
    cout<<r->section<<endl;
    return 0;
}