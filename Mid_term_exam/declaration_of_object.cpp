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
    Student r; // creating a object of Student
    r.cls=10;
    r.roll=11;
    r.section='A';
    char n1[100]="Rafiqul";
    strcpy(r.name,n1);
    cout<<r.name<<" "<<r.roll<<endl;
    return 0;
}