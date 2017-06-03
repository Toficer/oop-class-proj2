#pragma once
#include <vector>
#include <fstream>
class Star;
class Planet;
class Moon;
class AstronomicalObject;

///Inherits from the "AstronomicalObject" class, base class of the project.
class Galaxy: public AstronomicalObject
{
public:

	///Main constructor.
	Galaxy(int diameter_ly = 150000, int star_count = 317000, int galaxy_age = 13700);
	///Copy constructor.
	Galaxy(const Galaxy &g);
	///Destructor.
	~Galaxy();
	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &gout, Galaxy &g);
	///Virtual method converting the object to a string.
	virtual std::string toString();
	///Determining object type.
	virtual std::string detType();
	///Reading from file.
	virtual void readString(std::ifstream& input);
	virtual int returnType();
	int objType = 2;
	virtual std::string returnImage();

protected:
	int galaxy_age; //in M Earth ears
	static int galaxy_count;
	static int countGalaxies();
	std::string image = "galaxy.jpg";

	static Star Proxima_Centauri;
	Star sol;
	std::vector<Planet>inhabited_planet;
	std::vector <Moon> interesting_moon;
};