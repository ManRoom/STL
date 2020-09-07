#include <iostream>
#include <vector>

using namespace std;

int main() { 

    vector <string> myVector = { "start", "continue", "finished" }; // vector <string> myVector(20, 55), where first value count (size), second value default value fulling size  
   // vector <string> myVector(20, 55) === myVector.resize(20);
    
    myVector.reserve(100); // set size of capacity 
    myVector.push_back("while");
    //myVector.push_back("begin");
    //myVector.push_back("end");
    myVector[0] = "not start";
    myVector.at(1) = "not continue";

    if (myVector.size() > 5) {
        myVector.clear();
    }

    if (myVector.size() == 5) {
        myVector.pop_back();
    }
   
    for (int i = 0; i < myVector.size(); i++) {

        if ((myVector.size() - 1) == i) {
            cout << "[" << myVector[i] << "]\n";
        }
        else
            cout << "[" << myVector[i] << "] -> \t";

    }

    cout << myVector.capacity() << "\n" << myVector.size()<< endl; 

    myVector.shrink_to_fit();

    cout << "& " << myVector.capacity() << " -> reduce size of capacity " << endl;



    system("pause");
    return 0;
}
