#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
    //multimap
    map<int, string> myMap;

    for (int count = 0; count < 100; count++) {
        string str = to_string(count);
   myMap.emplace(count, "something #" + str);
}
   
    auto it = myMap.find(1);

    myMap[1] = "0";
    myMap.at(1) = "-0";
    myMap.erase(50);


    if (it != myMap.end()) {
        cout << "[" << it->first << "]" << " ->\t[" + it->second + "]" << endl;
    }
    else
        cout << "Key not found: " << it._Getcont() << endl;


    system("pause");
    return 0;
}

