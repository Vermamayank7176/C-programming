#include <bits/stdc++.h>
using namespace std;
 
void combination(string s , vector<string>v , vector<string>&answer , int index , string result){
  if(index >= s.size()){
      answer.push_back(result);
      return;
  }
  int digit = s[index] - '0';
  if(digit <= 1)combination(s , v , answer , index + 1 , result); // if digit is 1 or 0 we do not have any valid combination for them.
  for(int j = 0 ; j < v[digit].size() ; j++){
      combination(s , v , answer , index + 1 , result + v[digit][j]); // we have selected the paticular character from the string of the current digit.
  }
}
int main() {
    string s;
    cin>>s;
    vector<string>v(9);
    v = {"","","abc","def","ghi","jkl","mno","pqr","stuv","wxyz"};
    vector<string>answer;
    combination(s,v,answer,0,"");
    for(auto x:answer)cout<<x<<" ";
}

