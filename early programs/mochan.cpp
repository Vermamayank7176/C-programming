#include<iostream>
using namespace std;
void check(int n)
{
    int rem,t=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while((n!=0)||(n!=1))
    {
        n=n-2;
        
    }
    if(n<0)
    {
        printf("this is odd");

    }
    else
    {
        printf("this is even");
 
    }
     
   
    
}

int main()
{
    int n;
    check(n);
    return 0;
}
   