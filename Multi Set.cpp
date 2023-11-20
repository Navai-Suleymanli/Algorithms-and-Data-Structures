#include <bits/stdc++.h>

using namespace std;

int main()
{
    // multiset ----- The same as set but it can contain multiple instances of an element.
    // it is not possible to access the elements using the [] notation
    // all their elements are distinct
    // .insert(x);    ------ adds an element to the set
    // .count(x)      ------ returns the number of occurrences of an element in the set
    // .erase(x)      ------ removes an element from the set.
    // .size()        ------ retiurns the size of a set
    // .find(x)       ------ returns the position of an element

    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout<< s.count(5)<<"\n"; // 3
    
    // the functions erase removes all the instances of the element in set:
    s.erase(5);
    cout<< s.count(5)<<"\n"; // 0
    
    // it is often needed to erase only 1 of the instances of an element:
    s.erase(s.find(5));
    cout<< s.count(5)<<"\n"; // 2
    
    

    return 0;
}
