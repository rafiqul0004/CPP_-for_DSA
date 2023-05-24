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
Student fun(){
    char name[100]="Rafiqul Islam";
    Student r(12,'A',10,name);
    return r;
}
int main()
{
    Student r=fun();
      cout<<r.name<<endl;
    cout<<r.roll<<endl;
    cout<<r.cls<<endl;
    cout<<r.section<<endl;
    return 0;
}