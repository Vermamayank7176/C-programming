#include<bits/stdc++.h>
using namespace std;

int fun(int a,int b){
    if (b==0) return 1;
    if (b==1) return a;
    return (a)*fun(a,b-1);
}
int main ()
{
    int a,b;
    cout <<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<fun(a,b);

}