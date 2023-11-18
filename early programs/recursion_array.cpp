#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int index,int size){
    if (index==size) return 0;
    cout <<arr[index]<<"\n";
    fun(arr,index+1,size);
    
   
}
int main ()
{
    int arr[]={45,34,64,77,54,22,44,61,90,89},index,size=10;
    fun(arr,0,size);
}