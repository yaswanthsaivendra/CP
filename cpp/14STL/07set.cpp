// Set is a container which keeps a unique copy of every element in sorted order.

#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set<int> s;     //empty set of integers.

    s.insert(10);
    s.insert(15);

    cout << s.count(10) << "\n";
    cout << s.count(15) << "\n";
    s.erase(10);
    cout << s.count(10) << "\n";

    //some imp functions

    // s.insert(x)  -   insert the value of x into set, do nothing if already present. O(log N)
    // s.erase(x)   -   erase the value of x from set if present. O(log N)
    // s.count(x)   -   returns 0 if x is not in set and 1 if is in set. O(log N)
    // s.clear()    -   erase all elements. O(n)
    // s.size()     -   returns the current size of the set. O(1)
    // s.find(x)    -   returns iterator to element with value x. Returns s.end() if not found. O(log N)
    // s.erase(itr) -   erases the element with iterator itr. O(log N)
    // s.lower_bound(x) -   returs iterator to the first element which is >= x. Returns s.end() if not found O(log N)
    // s.upper_bound(x) -   returs iterator to the first element which is > x. Returns s.end() if not found O(log N)

    //unordered_set     - we use it when order doesn't matter.
    unordered_set<int> us;
    //we cannot use complex datatypes in unordered sets.

    //Multisets
    //multisets allows duplicates.
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("bcd");
    ms.insert("abc");
    //As every insertion takes place in a sorted way and as these multisets allows duplicates, these are easy to use alternatives for priority queues.
    //When we r erasing elements in multiset, we should not erase using element value, we should only use iterator to the element. bcoz deleting it using value , deletes all instances of that value.
     
    return 0;
}