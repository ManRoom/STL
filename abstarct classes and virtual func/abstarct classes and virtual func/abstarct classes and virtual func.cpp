#include <iostream>


using namespace std;


class Weapon {
public:
	virtual void Shoot() = 0;
};

class Gun : public Weapon {

public:

	   void Shoot() override {
		cout << "Shoot!" << endl;
	}
};

class Bazooka : public Gun {

public:

	void Shoot() override {
		cout << "Large shoot!" << endl;
	}
};

class RangeGun : public Gun {

public:

	void Shoot() override {
		cout << "Range shoot!" << endl;
	}
};


class knife : public Weapon {

public:
	void Shoot() override {
		cout << "Cheek!" << endl;
	}
};

class Player {
public:
	void Shoot(Weapon *get) {

		get->Shoot();

	}
};

int main() {
	Player player;

	Gun gun;
	Bazooka bazz;
	RangeGun rg;
	knife kn;

	//Gun *a = &m;
	//a->drive();



	player.Shoot(&gun);
	player.Shoot(&bazz);
	player.Shoot(&rg);

	player.Shoot(&kn);

 return 0;
}