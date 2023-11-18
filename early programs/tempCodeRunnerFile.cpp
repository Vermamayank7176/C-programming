#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;

    cout <<"Enter two numbers:";
    cin<<a<<b;
    cout<<a<"\t"<<b;
    for(int i=0;(i<=a)||(i<=b);i++)
    {
        if((a%i==0)||(b%i==0))
        cout<<"The num. is "<<i;
    }
}