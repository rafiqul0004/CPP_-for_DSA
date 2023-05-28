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
int main()
{
    char name1[100]="Rafiqul islam";
    Person* r= new Person(name1,5.5,23);
    char name2[100]="Dora";
    Person* d= new Person(name2,5,21);
    if(r->age>d->age){
        cout<<r->name<<endl;
    }
    else
    {
        cout<<d->name<<endl;
    }
    return 0;
}