#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int array[]={9,3,5,3,7,2,1,6,8};
    int large=*max_element(array+1,array+9);
    cout<<large<<endl;
    large ==-1;
    int secondlarge=*max_element(array,array+9);
    cout<<secondlarge;
   
   
   }
