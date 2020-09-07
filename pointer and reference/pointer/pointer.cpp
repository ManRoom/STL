#include <iostream>
using namespace std;
int main() {

	int value = 1;
	
	int* ptr_value = &value;

	int& ref_value = value;

	cout << "Value = " << value << "\n" << "*ptr = " << *ptr_value << "\n" << "ref = " << ref_value << "\n\n"
		<< "ptr = " << ptr_value << "\n" << "& ref = " << &ref_value << endl;

	return 0;
}

