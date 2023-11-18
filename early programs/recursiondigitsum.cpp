#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if ((n<0)||(n<=9)) return n;
    return fun(n/10)+(n%10);
}
int main ()
{
    int n;
    cout <<"Enter any digit:";
    cin>>n;
    cout<<fun(n);

}