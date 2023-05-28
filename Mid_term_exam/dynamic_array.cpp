#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a =new int [5];
    int *b =new int [10];
    for (int i = 0; i <10; i++)
    {
        b[i]=a[i];
    }
    delete [] a;
    return 0;
}