#pragma once
#include <fstream>
class AstronomicalObject;
class Galaxy;
class Star;
class Planet;
class Moon;

/// Inherits from the "Galaxy" class.
class SpiralGalaxy : public Galaxy
{
public:
	virtual int returnType();
	///Main constructor.
	SpiralGalaxy(int diameter_ly = 150000, int star_count = 317000, int galaxy_age = 13700, int number_of_arms = 6);
	///Copy constructor.
	SpiralGalaxy(const SpiralGalaxy &sg);

	/// Output stream operator.
	friend std::ostream& operator <<(std::ostream &sgout, SpiralGalaxy &sg);
	/// Virtual method converting the object to a string.
	std::string toString();
	///Determining object type.
	virtual std::string detType();
	///Reading from file.
	virtual void readString(std::ifstream& input);
	int objType = 3;
	virtual std::string returnImage();

protected:
	int number_of_arms;
	std::string image = "spiral.jpg";
};