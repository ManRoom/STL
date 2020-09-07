#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> mySet = {61, 42, 33, 54, 75}; // method set could add unique value 


    mySet.insert(64);

 /*   for (auto it : mySet) {
        cout << it << endl;
    }*/

    auto res = mySet.lower_bound(33);
    res = mySet.upper_bound(33); // return value witch large value of method`s 

    cout << *res << endl;

}
