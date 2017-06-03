#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include "Planet.h"
#include "Moon.h"
using namespace std;

int Planet::returnDiameter() {
	return p_diameter_km;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Planet::Planet() {

	interesting_moon_count = 1;
	planet_age = 4500; //in M Earth years
	p_diameter_km = 12000;
	moon_count = 1;
	planet_name = "XZ8721";

	interesting_moons.push_back(Moon());

#ifdef _DEBUG
	cout << "interesting_moons (planet) created." << endl; //debug-only message
	cout << "Planet created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Planet::Planet(const Planet &p) {
	interesting_moon_count = p.interesting_moon_count;
	planet_age = p.planet_age;
	p_diameter_km = p.p_diameter_km;
	moon_count = p.moon_count;

	if (interesting_moon_count != 0) {
		for (int i = 0; i < interesting_moon_count; i++) {
			interesting_moons.push_back(p.interesting_moons[i]);
		}

#ifdef _DEBUG
		cout << "interesting_moons (planet) copied." << endl; //debug-only message
#endif

	}

#ifdef _DEBUG
	cout << "Planet copied." << endl; //debug-only message
#endif
}


//------------------------------------------------------------------------------------------DESTRUCTOR


Planet::~Planet() {

	interesting_moons.clear();
#ifdef _DEBUG
	cout << "interesting_moons (planet) deleted." << endl; //debug-only message
	cout << "Planet deleted." << endl;
#endif
}


//------------------------------------------------------------------------------------------OPERATORS


//bool Planet::operator==(const Planet &p) {
//
//	if (p.interesting_moon_count == interesting_moon_count
//		&& p.planet_age == planet_age && p.p_diameter_km == p_diameter_km
//		&& p.moon_count == moon_count && p.planet_name == planet_name) 
//	{
//		
//		for (int i = 0; i < interesting_moon_count; i++) {
//			if (!(p.interesting_moons[i] == interesting_moons[i])) {
//				return false;
//			}
//		}
//		return true;
//	}
//}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet& Planet::operator=(const Planet &p) {

	interesting_moon_count = p.interesting_moon_count;
	planet_age = p.planet_age;
	p_diameter_km = p.p_diameter_km;
	moon_count = p.moon_count;
	planet_name = p.planet_name;

	interesting_moons.clear();

	if (interesting_moon_count != 0) {
		for (int i = 0; i < interesting_moon_count; i++) {
			interesting_moons.push_back(p.interesting_moons[i]);
		}
	}

	return *this;
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet& Planet::operator ++() {

	p_diameter_km += 1;
	return *this;
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet& Planet::operator --() {

	p_diameter_km -= 1;
	return *this;
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet& Planet::operator ++(int) {

	moon_count += 1;
	return *this;
}

int Planet::operator [](const int index) {

	if (index >= interesting_moon_count || index < 0) {
		return 0;
	}
	else return interesting_moons[index].returnDiameter();
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet::operator int() {

	int result = 0;
	for (int i = 0; i < interesting_moon_count; i++) {

		result += interesting_moons[i].returnDiameter();
	}
	result += p_diameter_km;
	return result;
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


bool Planet::operator >(Planet &p) {

	return returnDiameter() > p.returnDiameter();
}


//------------------------------------------------------------------------------------------NEXT OPERATOR


Planet Planet::operator +(const Planet &p) {

	Planet result;
	result.interesting_moons.clear();

	result.interesting_moon_count = p.interesting_moon_count + interesting_moon_count;
	result.planet_age = 0;
	result.p_diameter_km = 2*cbrt( pow(p.p_diameter_km/2, 3) + pow(p_diameter_km/2, 3) ); //calculated merged diameter
	result.moon_count = p.moon_count + moon_count;
	result.planet_name = "Merged planets";

	for (int i = 0; i < interesting_moon_count; i++) {

		result.interesting_moons.push_back(interesting_moons[i]);
	}

	for (int i = 0; i < p.interesting_moon_count; i++) {

		result.interesting_moons.push_back(p.interesting_moons[i]);
	}

	return result;
}