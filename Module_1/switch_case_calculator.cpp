#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char o;
    cin>>o;
    switch (o)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"Not defined";
        break;
    }
}