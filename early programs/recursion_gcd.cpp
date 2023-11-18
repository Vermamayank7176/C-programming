#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if((a=0)||(b=0)) return 0;
    if(b==0) return a;
    return gcd( b, a%b);
}
int main()
{
    int a,b,s;
    cout<<"Enter two num:";
    cin>>a>>b;
    s=gcd(a,b);
    cout<<"Maximum comman value in a and b is: "<<s;
   return 0;
}