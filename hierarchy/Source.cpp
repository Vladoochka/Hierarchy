#include <iostream>
#include "weapon.h"

int main() {
	Sword s1(100, 290);
	std::cout << s1.Strike() << '\n';
	std::cout << s1.Protect(100) << '\n';
	Club c1(90, 666);
	std::cout << c1.Strike();
	std::cout << '\n';
	std::cout << s1.Protect(1000) << '\n';
}