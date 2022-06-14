// Map
//key-value pairs

#include<iostream>
#include <map>
#include <unordered_map>

using namespace std;


int main(){

    //map<key_datatype, value_datatype> m;
    //In maps, the keys are sorted and unique.
    map<string, int> m;
    m["hello"] = 50;
    m["world"] = 12;
    cout<<m["hello"]<<"\n";
    m.insert({"hai",33});

    m.clear(); //clears the map
    // m[key] - value of element with key. 

    //these below functions are same as for sets.
    /*
    m.count(key), m.find(key), m.erase(key),
    m.lower_bound(key), m.upper_bound(key) .
    */

   // Map iterators behave similar to set iterators, but upon doing *itr, instead of getting the value, you get a pair of {key, value}
   // (*itr).first - to access key
   // (*itr).second - to access value.

   //or we can access them using arrow operator 
   // itr->first
   // itr->second

   auto it = m.find("hai"); 
   if(it == m.end()) cout<<"NO Value";
   else cout<<(*it).first << " "<< (*it).second;

   // unordered maps
   // When order doesn't matter, we should make use of unordered maps.
   unordered_map<int, string> um;
   //We cannot use any complex data types as keys of unordered_map.
    
    return 0;
}