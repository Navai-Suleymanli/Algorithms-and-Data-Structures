#include <bits/stdc++.h>

using namespace std;

int main(){

  // creating an integer array
  int array[] = {1,2,4,4,5,8,90,6,5,4,3};
  int n = sizeof(array) / sizeof(array[0]);  // sizeof array gives the array size in bytes, we have to divide it by the size of one element to find the number of elements that array contains
  sort(array, array+n);

  int x = 5;
  
  auto k = lower_bound(array,array+n,x)-array; // lowerbound gives the pointer to the location of the element if found or to the last element if not found, so we seubtract the array itself to take the correct place.
    if (k < n && array[k] == x) {  // to see if k is in the boundaries of array. because ujf not found, lower+bound returns a poiunter to the last element of the array
        cout<<"x found at index: "<<k<<"\n";
    }
}
