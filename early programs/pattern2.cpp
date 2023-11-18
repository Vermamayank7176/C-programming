#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,n;
    cin>>n;
    for (int i=1;i<=n;i++)
    { 
        for (int k=i; k<=n; k++)
        {
            cout<<"  ";            /* code */
        }
        
        for(int j=1;j<=((2*i)-1);j++)
        {
      /*  if((i==1)||(i==n)||(j==1)||(j==n))
        {
            cout<<" *";
        }
        else 
        {
            cout<<"  ";
        }  */
        cout<<" *";


        }
        cout<<endl;
    }
   /* for(int i=1;i<=n;i++)
    {
        for(int j=1;j<(n-i);j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }*/
}