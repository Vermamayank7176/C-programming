#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int array[10],size;
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter the elements in the array:"<<endl;
    for ( int i=0;i<size;i++)
    {
        cin>>array[i];
    }
     for ( int i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    cout<<"Maximum value in the array is : "<<*max_element(array,array+size)<<endl;
    cout<<"Minimum value in the array is : "<<*min_element(array,array+size)<<endl;    
    int sum = (*max_element(array,array+size) + *min_element(array,array+size));
    cout<<"Min. + Max. Value = "<<sum;




}