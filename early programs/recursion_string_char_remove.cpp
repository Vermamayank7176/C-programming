#include<bits/stdc++.h>
using namespace std;
string str(string s,int idx,int n){
    if (idx==n) return "";
    string current="";
    current=current+s[idx];
    return ((s[idx]=='a' ) ?"":current) + str(s,idx+1,n);
    
}
int main()
{
    string s="angsangara";
    int n=10;
    cout<<str(s,0,n);
}
