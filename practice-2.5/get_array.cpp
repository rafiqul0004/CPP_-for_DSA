#include<bits/stdc++.h>
using namespace std;
int *get_array(){
    int r;
    cin>>r;
    int *a=new int [r];
    for (int i = 0; i <r; i++)
    {
        cin>>a[i];
    }
    return a;

}
int main()
{
    int *ar=get_array();
    for (int i = 0; i <= sizeof(ar); i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}