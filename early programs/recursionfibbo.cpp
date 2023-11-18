#include<bits/stdc++.h>
using namespace std;

int fibbo(int n){
    if (n==1)       return 0;
    if (n==2)       return 1;
    return fibbo(n-1)+fibbo(n-2);
}
int main ()
{
    int n;
    cout <<"Enter the number of series: ";
    cin >>n;
    cout<<"Fibbonacci series is:"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout <<fibbo(i)<<"\t";
    }
}