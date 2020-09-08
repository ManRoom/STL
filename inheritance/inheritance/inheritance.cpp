#include <iostream>

using namespace std;

class Computer {

public:


    void setID(string id) { // ID is so name
        this->id = id;
    }

    void getID() {
        cout << id << endl;
    }

    //-----------------------------------------------//

    void setCost(string cost) {
        this->cost = cost;
    }

    void getCost() {
        cout << cost << endl;
    }

private:
    string id;
    string cost;
};

class Monitor : public Computer {

public:
    int size;
    string typeLight;


    void info(int size, string typeLight) {
        cout << "Size: " << size << " см.\n" << "Type of light: " << typeLight << endl << endl;
    }

};

class Interface : public Monitor {

public:
    string type_interface;
    string type_In_Out;
};

int main() {

    Computer comp;
    Monitor mon;
    Interface inter;

    comp.setID("0x0001");
    mon.setID("0x0020");
    mon.getID();
    mon.setCost("2455 rub");
    mon.info(12, "LED");
    inter.type_interface = "USB";


    return 0;
}