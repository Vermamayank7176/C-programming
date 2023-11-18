#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter a binary number: ";
    cin>>a;
    int power =1;
    int dec=0;
    while(a>0)
    {
        int rem = a%10;
        int value=rem*power;
        dec=dec+value;
        power = power * 2;
        a=a/10;        
    }
    cout << "The number in Decimal is : "<< dec;

}