#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main() {
    list<int> myList{ 5, 6, -3, 4, -7, -8,0, 2, 2, -1 };



    myList.push_back(10);
    myList.push_front(9);

    auto it = myList.begin();

    while ( it != myList.end()) {

        if (*it == 0) {
            myList.pop_back();
        }


        if (*it < 0) {
            it = myList.erase(it);    
        } 
        else {
            ++it;
        }
      
    }

    myList.sort();

    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << endl;
    }

    list<int> newList{};
    newList.assign(myList.begin(), myList.end()); // or method swap. So could use .assign(3, 5, 7, 9....); pull a new value in list replaced past value of list

    newList.unique();
    newList.resize(15, 1); // inc or descr size of list 
    
    for (auto it = newList.begin(); it != newList.end(); ++it) {
        cout << "old *" << *it << endl;
    }
    it = newList.begin();
     advance(it, 4);
    it = newList.emplace(it, 88);

    advance(it, 1);
    it = newList.insert(it, 99);
    for (auto it = newList.begin(); it != newList.end(); ++it) {
        cout << "new *" << *it << endl;
    }
    return 0;
}
