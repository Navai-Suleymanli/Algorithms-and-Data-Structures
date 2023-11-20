#include <bits/stdc++.h>

using namespace std;

int main()
{
    // it is not possible to access the elements using the [] notation
    // all their elements are distinct
    // .insert(x);    ------ adds an element to the set
    // .count(x)      ------ returns the number of occurrences of an element in the set
    // .erase(x)      ------ removes an element from the set.
    // .size()        ------ retiurns the size of a set
    
    
    

    set <int> s;
    s.insert(3);
    s.insert(6);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout<<s.count(3)<<"\n"; // 0
    cout<<s.count(4)<<"\n"; // 1
    
    /* the function count always returns either 0 (the element is not in the set) or 1 (the
element is in the set), and the function insert never adds an element to the set if
it is already there.*/
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n"; // 1
    
    
    // The following code creates a set, prints the number of elements in it, and then iterates through all the elements:
    set<int> s2 = {2,5,6,8};
    cout << s2.size() << "\n"; // 4
    for (auto x : s2) {
        cout << x << "\n";
    }
    
    
    
    

    return 0;
}
