#include "suffixarray.h"
using namespace std;

vector<int> computeSuffixArray(string &S) {
  // Your code goes here
  // The function should return a vector of integers storing the integer IDs of the suffix array
  vector<pair<string,int> >v;
  string s;
  vector<int>ans;
  for(int i=S.length()-1;i>=0;i--){
    s = S[i]+s;
    v.push_back(make_pair(s,i));
  }
  sort(v.begin(),v.end());
  
  for(auto i:v)
    ans.push_back(i.second);
  return ans;
}