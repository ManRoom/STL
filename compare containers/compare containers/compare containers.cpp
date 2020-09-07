#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> myVector		{1, 2, 3};
	vector<int> myVector_1		{1, 2, 3, 3};

	bool res = (myVector == myVector_1); // compare count value 
	cout << res << endl;

	bool res1 = (myVector > myVector_1); // compare count value
	cout << res1 << endl;

	bool res2 = (myVector < myVector_1); // compare count value
	cout << res2 << endl;


	return 0;
}