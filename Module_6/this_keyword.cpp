#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:

    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    Person rahat("Rahat",23);
    cout<<rahat.name<<" "<<rahat.age<<endl;
    return 0;
}