#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int array []={1,2,3,4,5,6},n,i,k;
    n=6;
    cout <<"Enter the rotation of array: "<<endl;
    cin>>k;
    if(k>n){
    k=k%n;
    }
    cout<<"Array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }
    int ansarray[6];
    int j=0;
    for(i=n-k;i<n;i++)
    {
        ansarray[j++]=array[i];
    }
    for (i=0;i<n-k;i++)
    {
        ansarray[j++]=array[i];
    }
    cout<<endl;
    cout<<"Rotated array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ansarray[i]<<"\t";
    }
}