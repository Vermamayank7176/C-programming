#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num,rem=0;
    cin>> num;
    cout<< num;
    int sum=0;
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<< " The sum of digits in : "<< sum;

}