#include <iostream>

using namespace std;

int v();

template<class type_one, class type_two>
type_one show_out(type_one value_one, type_two value_two) {
	return (value_one + value_two);
	
}


template <class type_one, class type_two>
class Auto {
public:
	void show(type_one color, type_two size) {
		cout << "Color auto: " << color << "\nSize auto: " << size << "\n";
		this->color = color;
		this->size = size;
	}

private:
	type_one color;
	type_two size;
};


int main() {
	int (*ptr)() = v;

	/* So can call function through point 
	* 
	(*ptr)();
	ptr();

	*/

	//cout << show_out(1.5, 3);


	Auto<string, float> info;
	info.show("red", 5.56f);


	return 0;
}


int v() {
	for (int i = 0; i < 100; i++) {
		cout << "[" << i << "]\t";
	}
	return 0;
}