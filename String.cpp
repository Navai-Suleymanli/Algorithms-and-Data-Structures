#include <bits/stdc++.h>

using namespace std;

int main()
{
    // strings are also dynamic arrays, but they have speacial syntax:
    // STRING FUNCTIONS:
    // .substr(k, x);    ----- returns the substring that begins at position k and has length x 
    // .find(t)          ----- finds the position of the first occurrence of a substring t.

    string a = "Azerbaycan";
    string  b = a+a; // "AzerbaycanAzerbaycan"
    b[5] = 'v'; 
    cout<< b <<"\n";  // AzerbvycanAzerbaycan
    string c =  b.substr(3,5); 
    cout<< c <<"\n"; // rbvyc
    cout<< b.find('A')<<"\n";
    

    return 0;
}
