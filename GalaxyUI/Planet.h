#pragma once
#include <string>
#include <vector>
class Moon;

///Part of a star system.
class Planet
{
public:

	///Main constructor.
	Planet();
	///Copy constructor.
	Planet(const Planet &p);
	///Destructor.
	~Planet();

	//---METHODS:
	///Returns the diameter of the planet (int).
	int returnDiameter();

	//---OPERATORS:

	///Compares two planets based on their variables. Currently doesn't seem to work.
	bool operator ==(const Planet &p);
	///Sets one planet's variables to that of another planet.
	Planet& operator =(const Planet &p);
	///Pre-increment, increases planet diameter.
	Planet& operator ++(); //pre-increment, increases planet diameter
	///Pre-decrement, decreases planet diameter.
	Planet& operator --(); //pre-decrement, decreases planet diameter
	///Post-increment, adds a new, uninteresting moon.
	Planet& operator ++(int); //post-increment, adds a new, uninteresting moon
	///Returns the diameter of moon no. index, or 0, of said moon doesn't exist.
	int operator [](const int index); //returns the diameter of moon no. index, or 0, of said moon doesn't exist
	///Returns a sum of the planet's diameter and all its interesting moons' diameters, giving an idea of the system's size.
	operator int(); //returns a sum of the planet's diameter and all its interesting moons' diameters, 
					//giving an idea of the system's size
	///Compares the two planets' diameters, returns the result.
	bool operator >(Planet &p); //compares the two planets' diameters, returns the result
	///Merges two systems with the planet_age set to 0
	Planet operator +(const Planet &p); //merges two systems with the planet_age set to 0

	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &pout, Planet &p); //returns information about the planet

private:
	int planet_age; //in M Earth years
	int p_diameter_km;
	int moon_count, interesting_moon_count;
	std::string planet_name;

	std::vector <Moon> interesting_moons;
};