#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:

    string name;
    int no;
    Person(string name,int no)
    {
        this->name=name;
        this->no=no;
    }
};
int main()
{
    Person* Kholi = new Person("Virat kholi",18);
    Person* Dhoni = new Person("Ms Dhoni",7);
    *Kholi=*Dhoni;
    cout<<Kholi->name<<" "<<Kholi->no<<endl;
    return 0;
}