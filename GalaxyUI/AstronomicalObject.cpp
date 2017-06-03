#include <iostream>
#include <string>
#include <fstream>
#include "AstronomicalObject.h"
using namespace std;

AstronomicalObject::AstronomicalObject(int star_count, int diameter_ly) {

	this->star_count = star_count;
	this->diameter_ly = diameter_ly;

#ifdef _DEBUG
	cout << "Astronomical object created." << endl;
#endif
}

string AstronomicalObject::toString() {
	std::string s1 = std::to_string(diameter_ly);
	std::string s2 = std::to_string(star_count);
	return (s1 + "\n" + s2);
}

void AstronomicalObject::readString(ifstream& input) {
	int s1=0, s2=0;
	input >> s1 >> s2;
	this->diameter_ly = s1;
	this->star_count = s2;
}

int AstronomicalObject::returnType() {
	return 0;
}