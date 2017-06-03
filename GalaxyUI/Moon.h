#pragma once

///Part of a planetary system.
class Moon
{
public:

	///Main constructor.
	Moon();
	///Copy constructor, not necessary as this object does not make use of dynamic memory allocation.
	Moon(const Moon &m);
	///Destructor, not necessary as this object does not make use of dynamic memory allocation.
	~Moon();

	//---METHODS:
	///Returns the diameter of the moon (int).
	int returnDiameter();

	//---OPERATORS:
	///Compares two moons based on their variables.
	bool operator==(const Moon &m);
	///Sets one moon's variables to that of another moon.
	Moon& operator=(const Moon &m);

private:
	int m_diameter_km;
	bool humans_visited;
};