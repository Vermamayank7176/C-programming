#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num=1,n,j;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            cout<<" "<<j;
        }
        for (j=1;j<=i-1;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    
}