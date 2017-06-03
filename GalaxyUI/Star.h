#pragma once
class Planet;
#include <vector>

///Part of a galaxy, has no operators.
class Star
{
public:

	///Main constructor.
	Star();
	///Copy constructor.
	Star(const Star &s);
	///Destructor.
	~Star();

private:
	int planet_count, interesting_planet_count;
	int temperature; //on the surface
	int diameter_km;

	std::vector <Planet> interesting_planets;
};