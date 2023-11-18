#include<bits/stdc++.h>
using namespace std;
int add(int , int );
int main ()
{
    int a,b,c;
    cout<<"Enter two numbers: \n";
    cin >>a;
    cin >>b;
    cout<< add(a,b);

}
int add(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}