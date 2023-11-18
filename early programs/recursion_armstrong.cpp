#include<bits/stdc++.h>      //for all header files 
using namespace std;
int power(int a,int b)
{
    int result;
    if (b==0) return 1;
    if( b%2==0) return power(a,b/2)*power(a,b/2);
    return a*power(a,b/2)*power(a,b/2);
}
int arm(int n,int digit)
{
    if(n==0) return 0;
    return power(n%10,digit)+arm(n/10,digit);

}
int main()
{   
    int temp,num,digits=0,result;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter number of digits: ";
    cin>>digits;
    result=arm(num,digits);
    if(result==num){
        cout<<"Armstrong";
    }
    else {
        cout<<"Not Armstrong";
    }



}