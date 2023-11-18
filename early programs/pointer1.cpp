#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b,c;
    int array[]={10,20,30,40};
    int *ptr1=&array[0];
    //cout <<sizeof(array)<<endl;
    ++*ptr1;
    cout << ptr1 <<"  "<<*ptr1<<endl;
    cout<<array;
    }