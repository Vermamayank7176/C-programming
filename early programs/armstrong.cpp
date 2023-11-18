#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num,t,i;
    cout<< " Armstrong numbers are : "<<endl;
    
    for (int i=0;i<500;i++)
    {   
        int sum=0;
        t=i;
        while(t!=0)
    {
       sum=sum+((t%10)*(t%10)*(t%10));
       t=t/10;
    }
       if(sum ==i)
       {
           cout << i << "\n";
       }
    
    }
}