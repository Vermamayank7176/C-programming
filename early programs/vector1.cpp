#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(2); 
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(3);    
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"insert element:"<<v.insert(v.begin()+3,9)<<endl;
}