#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a;
    cin>>b;
    for(int i=0;i<=a;i++)
    {
        if(a%i==0)
        {
             cout<<"The num. is "<<i;
        }
    }
    for(int i=0;i<=b;i++)
    {
        if(b%i==0) 
        {
            cout<<"The num. is "<<i;
        }
    }
    return 0;

}