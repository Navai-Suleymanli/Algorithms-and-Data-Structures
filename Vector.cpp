#include <bits/stdc++.h>

using namespace std;

int main()
{
    //  FUNCTIONS FOR VECTORS:
    // .push_back(x)  ------ adding an element to the end of the vector
    // .size()        ------ getting the size of a vector
    // .back()        ------ returns the last element in the vector
    // .front()       ------ returns the first element in the vector
    // .pop_back()    ------ removes the last element from the vector
    // .insert(x, y)  ------ It inserts a new element y before the element at the specified x position
    // .erase(x)      ------ It is used to remove elements from a vector from the specified position or range.
    // .swap(x)       ------ It is used to swap the contents of one vector with another vector of the same type. Sizes may differ.
    // .emplace(x)    ------ It extends the container by inserting a new element at the position

    
    //The most popular dynamic array is a vector:
    // The following code creates an empty vector and adds three elements to it:
    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]
    
    // after this, all the elements can be accessed like in an ordinary array:
    cout << v[0] << "\n"; // 3
    cout << v[1] << "\n"; // 2
    cout << v[2] << "\n"; // 5
    
    // function size() returns the size of a vector:
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    
    
    //A shorter way to iterate through a vector is as follows:
    for (auto x : v) {
        cout << x << "\n";
    }
    
    //The function back returns the last element in the vector
    cout << v.back() << "\n"; // 2
    
    // function pop_back() removes the last element from the vector
    v.pop_back(); // [3,2]
    
    
    //The following code creates a vector with five elements:
    vector<int> v2 = {2,4,2,5,1};
    
    // size 10, initial value 0
    vector<int> v3(10)
    
    // size 10, initial value 5
    vector<int> v4(10, 5);


    return 0;
}
