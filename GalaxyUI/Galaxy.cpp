#include <iostream>
#include "Planet.h"
#include "Moon.h"
#include "Star.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include <vector>
#include <fstream>
using namespace std;

int Galaxy::galaxy_count = 0;

string Galaxy::returnImage() {
	return image;
}

int Galaxy::countGalaxies() {
	return galaxy_count;
}

string Galaxy::toString() {
	std::string s1 = AstronomicalObject::toString();
	std::string s2 = std::to_string(galaxy_age);
	std::string s0 = detType();
	return (s0 + "\n" + s1 + "\n" + s2);
}

string Galaxy::detType() {
	std::string s4 = std::to_string(2);
	return (s4);
}

void Galaxy::readString(ifstream& input) {
	AstronomicalObject::readString(input);
	int s1 = 0;
	input >> s1;
	this->galaxy_age = s1;
}

int Galaxy::returnType() {
	return objType;
}

//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy(int diameter_ly, int star_count, int galaxy_age) {

	this->galaxy_age = galaxy_age;
	this->diameter_ly = diameter_ly;
	this->star_count = star_count;

	inhabited_planet.push_back(Planet());

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) created." << endl << endl; //debug-only message
#endif

	interesting_moon.push_back(Moon());

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) created." << endl << endl; //debug-only message

	cout << "Galaxy created." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Galaxy::Galaxy(const Galaxy &g) {

	galaxy_age = g.galaxy_age;

	inhabited_planet.push_back(g.inhabited_planet[0]);

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) copied." << endl << endl; //debug-only message
#endif

	interesting_moon.push_back(g.interesting_moon[0]);

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) copied." << endl << endl; //debug-only message

	cout << "Galaxy copied." << endl;
#endif

	galaxy_count++;
}


//------------------------------------------------------------------------------------------DESTRUCTOR


Galaxy::~Galaxy() {

	inhabited_planet.clear();

#ifdef _DEBUG
	cout << "inhabited_planet (galaxy) deleted." << endl << endl; //debug-only message
#endif

	interesting_moon.clear();

#ifdef _DEBUG
	cout << "interesting_moon (galaxy) deleted." << endl << endl; //debug-only message
#endif

#ifdef _DEBUG
	cout << "Galaxy deleted." << endl << endl; //debug-only message
#endif

	galaxy_count--;
}