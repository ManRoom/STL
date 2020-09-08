#include <iostream>
using namespace std;

template<typename T>
class SmartPointer {
public:
    SmartPointer(T* ptr) {
        this->ptr = ptr;
        cout << "constructor" << endl;
    }

    ~SmartPointer() {
        delete ptr;
        cout << "destructor" << endl;
    }

    T& operator*() {
        cout << "pointer" << endl;
        return *ptr;
    }

private:
    T* ptr;
};

int main()
{

    SmartPointer<int> pointer = new int(100);


    cout << *pointer << endl;




    //system("pause");
    return 0;
}
