#include<bits/stdc++.h>
using namespace std;
int fun(int n)
 {   
    cout<<1;

    cout<<fun(n-1);
    

}
int main()
{ 
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<fun(n);

}