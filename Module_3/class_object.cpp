#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student r;
    r.cls=10;
    r.roll=11;
    r.section='A';
    char n1[100]="Rahat";
    strcpy(r.name,n1);

    Student p;
    p.cls=10;
    p.roll=17;
    p.section='C';
    char n2[100]="Karim";
    strcpy(p.name,n2);
    cout<<r.name<<" "<<r.roll<<endl;
    cout<<p.name<<" "<<p.roll<<endl;
    return 0;
}