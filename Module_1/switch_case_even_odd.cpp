#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    switch(r%2)
    {
        case 0:
         cout<<"Even"<<endl;
         break;
        case 1:
         cout<<"Odd"<<endl;
         break;
        default:
         cout<<"Not found"<<endl;
    }
}