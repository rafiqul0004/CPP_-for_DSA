#include<bits/stdc++.h>
using namespace std;
namespace Rahat
{
    int age=23;
    void hi()
    {
        cout<<" Hello Rahat"<<endl;
    }
}
namespace Rafiqul
{
    int age2=24;
    void hello()
    {
        cout<<" Hello Rafiqul"<<endl;
    }
}
using namespace Rahat;
using namespace Rafiqul;
int main()
{
    hi();
    cout<<age<<endl;
    hello();
    cout<<age2<<endl;
    return 0;
}