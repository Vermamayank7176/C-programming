#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,array[10],i;
    cout <<"Enter the size of the array:";
    cin>>size;
    cout<<"Enter the elements in array sequencely:";
    for (  i = 0; i <size; i++)
    {
        cin >>array[i];
    }
    for ( i=0;i<size;i++)
    {
        cout<<"\t"<<array[i];
    }
    cout<<endl;
    int sum=0,missing_value;
    for (i=0;i<size;i++)
    {
        sum =sum+array[i];

    }
    cout<<"Sum of the series is :"<<sum<<endl;
    int sizee=size+1;
    int min=*min_element(array,array+size);
    int min2=*min_element(array+1,array+size);
    int max=*max_element(array,array+size);
    int d=min2-min;
    cout<< min<<" "<<min2<<" "<<max<<" "<<d<<endl;
    int formula=((2*min)+(size)*d)*(sizee/2);
    missing_value = formula-sum;
    cout<<"missing value is :"<<missing_value;
    return missing_value;
}
