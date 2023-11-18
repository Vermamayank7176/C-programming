#include<bits/stdc++.h>
using namespace std; 
bool prime ( int );
int main ()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>> a>>b;
    cout << " The prime numbers are :"<<endl;
    for (int i=a;i<=b;i++)
    {
        if(prime(i))
        {
        cout <<" "<<i<<endl;
        }
    }
}
bool prime(int num )
{
    for (int i=2;i<num ;i++)
    {
    if(num%i==0)
    {
        return false;
    }
    }
    return true;
    
}