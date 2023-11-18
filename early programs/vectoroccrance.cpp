#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int > v(5);
    int i,size, target;
    cout <<"Enter element : "<<endl;
    for ( i=0; i<v.size() ; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter target :";
    cin>> target;
    int occrance=0;
    for (i=0; i<v.size();i++)
    {
        if(v[i]=target)
        {
            occrance++;
        }
    }
    cout <<"Occrance is: "<<occrance<<endl;

}
