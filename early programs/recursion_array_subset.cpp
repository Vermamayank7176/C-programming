#include<bits/stdc++.h>
using namespace std;
int f(int *array, int size,int target,int i)
{
    if(i==size) return false;
    return(array[i]==target)||(f(array,size,target,i+1));
}
    
int main()
{
    int array[]={1,2,3,4,5},size=5,target,i;
    cout<<"Enter target element.";
    cin>>target;
    int result=f(array,5,target,0);
    if(result) cout<<target<<" is Present.";
    else cout<<"Not Present";
    return 0;
}