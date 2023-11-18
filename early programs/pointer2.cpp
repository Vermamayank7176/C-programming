#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,array[]={1,2,3,4,5,6},*ptr ;
    int *ptr1=&array[0];
    for(int i=0;i<6;i++)
    {
        cout<<*ptr1<<"\t";
        ptr1++;
    }

    cout<<"\n";
    /*cout<<"Enter the index:";
    cin>>k;
    ptr1=&array[0];
    cout<<*(ptr1+k-1);
*/
    ptr=&array[5];
    for(int i=0;i<6;i++)
    {
        cout<<*(ptr)<<"\t";
        ptr--;
    }

    

   
  
    

}
