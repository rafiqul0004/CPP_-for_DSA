#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    Person(char n[100],float h,int a){
        height=h;
        age=a;
        strcpy(name,n);
    }

};
Person rtrn()
{
    char name[100]="Rafiqul islam";
    Person r(name,5.5,23);
    return r;
}
int main()
{
    Person r=rtrn();
    cout<<r.name<<endl;
    cout<<r.age<<endl;
    cout<<r.height<<endl;
    return 0;
}