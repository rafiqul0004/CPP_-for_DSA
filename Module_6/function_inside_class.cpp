#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:

    string name;
    int age,marks1,marks2;
    Person(string n,int a,int m1,int m2)
    {
        name=n;
        age=a;
        marks1=m1;
        marks2=m2;
    }
    void info()
    {
        cout<<name<<" "<<age<<endl;
    }
    int marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    Person rahat("Rafiqul",23,89,95);
    rahat.info();
    cout<<rahat.marks()<<endl;
    return 0;
}