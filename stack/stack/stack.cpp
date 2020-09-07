#include <iostream>
#include <stack>

#include <deque>
#include <list>
#include <vector>

using namespace std;

int main() {
	stack<int, list<int>> st;

	


	st.push(65);
	st.push(35);
	st.push(256);
	st.push(13);

	st.emplace(1); // different .emnplace from .push methods .push create copy of object and push in collections, when so .emplace don`t creare copy and  push it in collection




	while (!st.empty()) {

		cout << st.top() << endl;

		st.pop();
	}

	return 0;
}
