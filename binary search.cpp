#include <bits/stdc++.h>
using namespace std;

int main(){
   
  
    
  // sotring arrays
  int n = 7; // array size
  int arr[] = {4,3,2,5,5,8,9};
  sort(arr,arr+n);

  int a = 0;
  int b = n-1;
  int x = 3;
  
  while(a<=b){
      int k = (a+b)/2;
      if(arr[k] == x){
          cout<<"x found at index: "<<k<<"\n";
      }
      if(arr[k]>b){
          b = k-1;
      }
      else{
          a = k+1;
      }
  }
  
}
