#include<bits/stdc++.h>
using namespace std;
void f(string &str,int i,string result,vector<string> &li)
{
    if (i==str.length())
    {
        li.push_back(result);
        return;
    }
    f(str,i+1,result+str[i],li);
    f(str,i+1,result,li);
}
int main()
{
    string s;
    cout<<"please enter a string: ";
    cin>>s;
    vector<string>result;
    f(s,0,"",result);
    for (int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}