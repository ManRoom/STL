#include <iostream>
#include <forward_list>

using namespace std;
int main() {
    forward_list<int> myList {1, 2, 3, 4};
    
    

    myList.push_front(0); // method is equls .before_begin;

    auto it = myList.begin();

    cout << *it << endl << endl;

    for (auto i : myList) {
        cout << i << endl;
    }


    return 0;
}
