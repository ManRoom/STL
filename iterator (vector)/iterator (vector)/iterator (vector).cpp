#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector<int> myVector {1, 2, 3, 4};
	//vector<int>::iterator it;
	//
	//for (vector<int>::iterator it = myVector.begin(); it < myVector.end(); it++) { // for const_iterator using methods ".cbegin()" and ".cend()"
	//	cout << "-> \t" << *it << endl;
	//}
	//cout << "\n|-\t-\t-\t-\t-|\n" << endl;
	//for (vector<int>::reverse_iterator it = myVector.rbegin(); it < myVector.rend(); it++) { // reverse method
	//	cout << "<- \t" << *it << endl;
	//}


	vector<int> myVector1 { 1, 2, 3, 4 };
	vector<int>::iterator it1;

	it1 = myVector1.begin();

	//cout << *(it1 + 1) << endl;

	// for goto on vector
	//advance(it1, 3);
	//cout << *it1 << endl;

	//myVector1.insert(it1 + 1, 3); // pull in any place value for iterator`s

	//for (it1 = myVector1.begin(); it1 < myVector1.end(); it1++) { 
	//	cout << "<- \t" << *it1 << endl;
	//}

	it1 = myVector1.begin(); // again point place for iterator

	myVector1.erase(it1 + 1, it1 + 3); // del in any place value for iterator`s. So could del range

	for (it1 = myVector1.begin(); it1 < myVector1.end(); it1++) {
		cout << "<- \t" << *it1 << endl;
	}

	return 0;
}
