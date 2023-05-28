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
    char name[100]="Rafiqul islam";
    Person* r= new Person(name,5.5,23);
    cout<<r->name<<endl;
    cout<<r->age<<endl;
    cout<<r->height<<endl;
    cout<<sizeof(r);
    return 0;
}