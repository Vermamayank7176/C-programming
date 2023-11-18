#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<int>item;
   item.push(10);
   item.push(20);
   item.push(30);
   item.push(40);
   item.pop();
   while(not item.empty())
   {
      cout<<item.front()<<endl;
      item.pop();
   }
}
