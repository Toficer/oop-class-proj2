#include <iostream>
#include "Star.h"
#include "Planet.h"
using namespace std;


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star() {

	interesting_planet_count = 1;
	planet_count = 10;
	temperature = 5700;
	diameter_km = 1400000;

	if (planet_count != 0) {
		int i=0;
		do {
			interesting_planets.push_back(Planet());
#ifdef _DEBUG
			cout << "interesting_planets (star) created." << endl; //debug-only message
#endif
			i++;
		} while (i < interesting_planet_count);

	}

#ifdef _DEBUG
	cout << "Star created." << endl;
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Star::Star(const Star &s) {

	interesting_planet_count = s.interesting_planet_count;
	planet_count = s.planet_count;
	temperature = s.temperature;
	diameter_km = s.diameter_km;

	if (interesting_planet_count > 0) {
		for (int i = 0; i < interesting_planet_count; i++) {
			interesting_planets.push_back(s.interesting_planets[i]);
		}

#ifdef _DEBUG
		cout << "interesting_planets (star) copied." << endl; //debug-only message
#endif
	}

#ifdef _DEBUG
	cout << "Star copied." << endl;
#endif

}


//------------------------------------------------------------------------------------------DESTRUCTOR


Star::~Star() {

	interesting_planets.clear();

#ifdef _DEBUG
	cout << "interesting_planets (star) deleted." << endl; //debug-only message
	cout << "Star deleted." << endl;
#endif

}