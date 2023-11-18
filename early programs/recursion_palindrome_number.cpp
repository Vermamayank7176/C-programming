#include<bits/stdc++.h>
using namespace std;
int pali(int n)
{
    int rem=0,rev=0,key;
    key=n;
     if (n==0) return 0;
     return result;
     result
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
        pali(n-1)
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
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<pali(n);
}