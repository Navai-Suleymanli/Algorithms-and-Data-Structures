#include <bits/stdc++.h>
using namespace std;

int main(){
  // sotring vectors
  vector<int> v = {4,2,5,3,5,8,3};
  int n = v.size();
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++){
    cout<<v[i]<<"\n";
  }


  // sprting vectors in reverse order
  sort(v.rbegin(),v.rend());
  for(int i=0; i<n; i++){
    cout<<v[i]<<"\n";
  }

  // sotring arrays
  int b = 7; // array size
  int a[] = {4,2,5,3,5,8,3};
  sort(a,a+b);
  cout<<a<<"\n";

  // srtring strings
  string s = "monkey";
  sort(s.begin(), s.end());

  
  cout<< s<<"\n";
  
}
