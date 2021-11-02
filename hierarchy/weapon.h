#ifndef HIERARCHY_WEAPON_H
#define HIERARCHY_WEAPON_H
#include <random>

class Weapon {
protected: const char* name;
		 int blow_power;
		 int protect_power;

public: Weapon(int bp, int pp, const char* name) : blow_power(bp), protect_power(pp), name(name) {}
	  virtual int Strike() = 0;
	  virtual int Protect(int Power) = 0;
	  const char* getName() { return name; };
};

class Shield :public Weapon {
public:Shield(int bp, int pp) : Weapon(bp, pp, "Shield") {
}

	  virtual int Strike() override {
		  int randy = std::rand() % blow_power + 0;
		  blow_power -= randy / 10;
		  return blow_power;
	  }

	  virtual int Protect(int Power) {
		  int randy = std::rand() % protect_power + 0;
		  protect_power -= randy / 10;
		  int dist = Power - protect_power;
		  if (dist > 0)
			  return dist;
		  else
			  return 0;
	  }
};

class Club :public Weapon {
public: Club(int bp, int pp) : Weapon(bp, pp, "Club") {}
	  virtual int Strike() override {
		  int randy = std::rand() % blow_power + 0;
		  blow_power -= randy / 10;
		  return blow_power;
	  }

	  virtual int Protect(int Power) {
		  int randy = std::rand() % protect_power + 0;
		  protect_power -= randy / 10;
		  int dist = Power - protect_power;
		  if (dist > 0)
			  return dist;
		  else
			  return 0;
	  }
};

class Sword :public Weapon {
public: Sword(int bp, int pp) : Weapon(bp, pp, "Sword") {}
	  virtual int Strike() override {
		  int randy = std::rand() % blow_power + 0;
		  blow_power -= randy / 10;
		  return blow_power;
	  }

	  virtual int Protect(int Power) {
		  int randy = std::rand() % protect_power + 0;
		  protect_power -= randy / 10;
		  int dist = Power - protect_power;
		  if (dist > 0)
			  return dist;
		  else
			  return 0;
	  }

};
#endif //HIERARCHY_WEAPON_H

