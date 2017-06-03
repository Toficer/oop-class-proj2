#pragma once
#include <fstream>
class AstronomicalObject;

///Inherits from the "AstronomicalObject" class.
class CosmicVoid : public AstronomicalObject
{
public:
	///Main constructor, forces the parent class to be created with 0 stars.
	CosmicVoid(bool alien_presence = 0) : AstronomicalObject(0, 150000)
	{
		using namespace std;

		this->alien_presence = alien_presence;

		#ifdef _DEBUG
				cout << "Cosmic void created." << endl;
		#endif
	};

	///Copy constructor, not necessary as this object does not make use of dynamic memory allocation.
	CosmicVoid(const CosmicVoid &c);

	///Output stream operator.
	friend std::ostream& operator <<(std::ostream &vout, CosmicVoid &v);
	///Virtual method converting the object to a string.
	std::string toString();
	///Determining object type.
	virtual std::string detType();
	///Reading from file.
	virtual void readString(std::ifstream& input);
	virtual int returnType();
	int objType = 1;
	virtual std::string returnImage();

private:
	std::string image = "void.jpg";
	bool alien_presence;
};