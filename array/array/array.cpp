#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 10> arr = {4, 6, 2, 0, 2, 7, 9, 8, 1};
	array<int, 10> arr1= {};
	cout << arr.front() << endl; // back mt

	//arr.fill(0); fill value of zero or other
	
	for (int el : arr) {
		cout << el << endl;
	}

	cout << "\t+-----------------------+" << endl;
	cout <<"\t|\t" <<  arr.at(8) << "\t\t|" << endl;
	cout << "\t+-----------------------+" << endl;

	return 0;
}

