#include <bits/stdc++.h>
using namespace std;
int findIndex(string s ,char ch , int *first ,int *last)
{
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==ch)
        {
            *first=i;
            //cout <<"First Occrance is : "<<i<<endl;
            break;
        }
    }
     for (int i=s.size();i>0;i--)
    {
        if (s[i]==ch)
        {
            *last=i;
           // cout <<"Last Occrance is : "<<i<<endl;
            break;
        }
    }
}
int main(){
    string s="aaaaachfsasss";
    char ch='a' ;
    int first=-1 ,last=-1 ;
    int *pf=&first ;
    int *pl=&last ;
    findIndex(s,ch,pf,pl);
    cout<<first<<"\t"<<last<<"\n";
    cout<<*pf<<" \t"<<*pl;

}