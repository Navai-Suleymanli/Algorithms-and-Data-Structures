#include <bits/stdc++.h>

using namespace std;

int main()
{
    // strings are also dynamic arrays, but they have special syntax:
    // STRING FUNCTIONS:
    // .length()  & .size()  ----- returns the length of the string
    // .swap(x)              ----- This function is used to swap the values of 2 strings
    // .substr(k, x);        ----- returns the substring that begins at position k and has length x 
    // .find(t)              ----- finds the position of the first occurrence of a substring t
    // .begin(), .end()      ----- vectordaki kimi iterator funksiyalar
    // strcat(dest, src);    ----- appends 2 strings
    // strcopy(dest, src);   -----  copies a character string from source to destination

    string a = "Azerbaycan";
    string  b = a+a; // "AzerbaycanAzerbaycan"
    b[5] = 'v'; 
    cout<< b <<"\n";  // AzerbvycanAzerbaycan
    string c =  b.substr(3,5); 
    cout<< c <<"\n"; // rbvyc
    cout<< b.find('A')<<"\n";
    

    return 0;
}
