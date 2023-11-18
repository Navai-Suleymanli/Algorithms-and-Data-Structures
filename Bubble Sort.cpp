// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int array[] = {1,5,7,7,9,4,6, 4,13,45,78,900,43,1,2,3,3,4,5}; // creating and array of integers
    int n = sizeof(array);// giving the size of the array as a value to n
    
    for(int i=0; i<n; i++){ 
        for(int j = 0; j<n-1;j++){
            if (array[j] > array[j+1]) {
                swap(array[j],array[j+1]);  // swapping elements
            }
        }
    }
    
    for(int i=0; i<n; i++){  // printing the elements in a sorted order
        cout<<array[i]<<" ";
    }

    return 0;
