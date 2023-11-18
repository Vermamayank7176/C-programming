#include <bits/stdc++.h>
using namespace std;
int swap (int *a,int *b )
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;
    int *p1=&x;
    int *p2=&y;
    cout<<"Before Swaping : "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After Swaping: "<<x<<" "<<y;
}