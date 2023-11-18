#include<bits/stdc++.h>
using namespace std;
int sum(int,int );                  //prototype
int main ()
{
    int a,b;
    //a=10,b=20;
    cout <<"Enter any two positive numder:";
    cin>>a>>b;
    cout<<sum(a,b);                 //calling function

    
}
int sum (int x ,int y=5)              //called function
{
    int add = x+y;
    return add;
    
}