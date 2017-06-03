#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "SpiralGalaxy.h"
#include <fstream>
using namespace std;

string SpiralGalaxy::returnImage() {
	return image;
}

string SpiralGalaxy::toString() {
	std::string s1 = Galaxy::toString();
	s1.erase(0, 2);
	std::string s2 = std::to_string(number_of_arms);
	std::string s0 = detType();
	return (s0 + "\n" + s1  + "\n" + s2);
}

string SpiralGalaxy::detType() {
	std::string s5 = std::to_string(3);
	return (s5);
}

void SpiralGalaxy::readString(ifstream& input) {
	Galaxy::readString(input);
	int s1 = 0;
	input >> s1;
	this->number_of_arms = s1;
}

int SpiralGalaxy::returnType() {
	return objType;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


SpiralGalaxy::SpiralGalaxy(int diameter_ly, int star_count, int galaxy_age, int number_of_arms) {

	this->number_of_arms = number_of_arms;
	this->galaxy_age = galaxy_age;
	this->diameter_ly = diameter_ly;
	this->star_count = star_count;

#ifdef _DEBUG
	cout << "Spiral galaxy created." << endl;
#endif
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


SpiralGalaxy::SpiralGalaxy(const SpiralGalaxy &sg) {

	number_of_arms = sg.number_of_arms;

#ifdef _DEBUG
	cout << "Spiral galaxy copied." << endl;
#endif
}