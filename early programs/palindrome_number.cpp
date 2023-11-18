#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem=0,rev=0;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int key=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"Reverse of "<< key <<" is : "<<rev<<endl;
    if(key==rev) 
    {
        cout<<"Palindrome.";
    }
    else 
    {
             cout <<"Not palindrome.";
    }
    
}