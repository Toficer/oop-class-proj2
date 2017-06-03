#include <iostream>
#include "AstronomicalObject.h"
#include "CosmicVoid.h"
#include <fstream>
using namespace std;

string CosmicVoid::returnImage() {
	return image;
}

string CosmicVoid::toString() {
	std::string s1 = AstronomicalObject::toString();
	std::string s2;
	std::string s0 = detType();
		if (alien_presence) {
			s2 = "1";
		}
		else {
			s2 = "0";
		}

	return (s0 + "\n" + s1 + "\n" + s2);
}

string CosmicVoid::detType() {
	std::string s4 = std::to_string(1);
	return (s4);
}

void CosmicVoid::readString(ifstream& input) {
	AstronomicalObject::readString(input);
	int s1 = 0;
	input >> s1;
	this->alien_presence = s1;
}

int CosmicVoid::returnType() {
	return objType;
}


CosmicVoid::CosmicVoid(const CosmicVoid &c)
{
	using namespace std;

	alien_presence = c.alien_presence;
	star_count = c.star_count;
	diameter_ly = c.diameter_ly;

#ifdef _DEBUG
	cout << "Cosmic void copied." << endl;
#endif
};