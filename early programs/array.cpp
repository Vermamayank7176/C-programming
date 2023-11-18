#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,3,4,3,2,1,8};
    for (int i=0;i<7;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;    
    cout<<*max_element(a,a+7);

}