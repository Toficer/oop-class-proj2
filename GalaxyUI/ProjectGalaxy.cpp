#include <iostream>
#include <string>
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "CosmicVoid.h"
#include "SpiralGalaxy.h"
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <limits>

using namespace std;

ostream& operator <<(ostream &pout, Planet &p) {

	pout << "Age: " << p.planet_age << ", Diameter: " << p.p_diameter_km << ", Moons: " << p.moon_count;
	return pout;
}

//Main object stream operators

ostream& operator <<(ostream &gout, Galaxy &g) {
	string output = g.toString();
	gout << output;
	return gout;
}

ostream& operator <<(ostream &vout, CosmicVoid &v) {
	string output = v.toString();
	vout << output;
	return vout;
}

ostream& operator <<(ostream &sgout, SpiralGalaxy &sg) {
	string output = sg.toString();
	sgout << output;
	return sgout;
}

ostream& operator <<(ostream &aout, AstronomicalObject &a) {
	string output = a.toString();
	aout << output;
	return aout;
}

//Interface functions and exception handling
///Choosing the option.
void setOption(int &x) {
	cin >> x;
	if (x != 8 && x != 7 && x != 6 && x != 5 && x != 4 && x != 3 && x != 2 && x != 1) {
		throw string("\n\nIncorrect input, please enter an integer between 1 and 5.\n\n");
	}
}
///Outputing a string describing an object.
void writeString(int x, vector <AstronomicalObject*> objects) {
	if (x >= objects.size()) {
		throw string("\n\nThere is no object of that number.\n\n");
	}
	cout << endl << *objects[x] << endl << endl;
}
///Saving an object to a file.
void writeToFile(int x, string name, vector <AstronomicalObject*> &objects) {
	if (x >= objects.size()) {
		throw string("\n\nThere is no object of that number.\n\n");
	}

	ofstream output;
	output.open(name);
	output << *objects[x];
	system("cls");
	cout << "\n\nObject saved to the file: " << name << ".\n\n" << endl;
	output.close();
}
///Reading an object from a file.
void readFromFile(string name, vector <AstronomicalObject*> &objects) {
	int s1 = 0;

	ifstream input;
	input.open(name);

	if (!input.is_open()) {
		throw string("\n\nFile doesn't exist or couldn't be accessed.\n\n");
	}

	input >> s1;

	if (s1 == 1) {
		system("cls");
		cout << "\n\nCreating a cosmic void.\n\n" << endl;
		CosmicVoid *temp = new CosmicVoid();
		temp[0].readString(input);
		objects.push_back(temp);
	}
	else if (s1 == 2) {
		system("cls");
		cout << "\n\nCreating a galaxy.\n\n" << endl;
		Galaxy *temp = new Galaxy();
		temp[0].readString(input);
		objects.push_back(temp);
	}
	else if (s1 == 3) {
		system("cls");
		cout << "\n\nCreating a spiral galaxy.\n\n" << endl;
		SpiralGalaxy *temp = new SpiralGalaxy();
		temp[0].readString(input);
		objects.push_back(temp);
	}
	else {
		throw string("\n\nFile doesn't contain a recognized object.\n\n");
	}
	input.close();
}
///Deleting an object.
void deleteObject(vector <AstronomicalObject*> &objects) {
	if (objects.size() == 0) {
		throw string("\n\nThere are no objects in the container.\n\n");
	}
	objects.pop_back();
	system("cls");
	cout << "\n\nObject deleted.\n\n" << endl;
}
///Creating an object.
void createObject(vector <AstronomicalObject*> &objects) {
	int x=0;
	cout << "What type of object would you like to create?." << endl;
	cout << "[1] - cosmic void." << endl;
	cout << "[2] - galaxy." << endl;
	cout << "[3] - spiral galaxy." << endl;
	cout << "[other] - cancel creation." << endl;
	cin >> x;

	if (x != 1 && x != 2 && x != 3) {
		throw string("\n\nCreation aborted.\n\n");
		return;
	}

	if (x == 1) {
		system("cls");
		int s1;
		cout << "Are there aliens in the void?." << endl;
		cout << "[0] - no, [other] - yes." << endl;
		cin >> s1;

		if (x != 1 && x != 0) {
			throw string("\n\nIncorrect input, aborting.\n\n");
			return;
		}
		system("cls");

		CosmicVoid *temp = new CosmicVoid(s1);
		objects.push_back(temp);
		cout << "\n\nCreating a cosmic void.\n\n" << endl;
	}

	else if (x == 2) {
		system("cls");
		int s1, s2, s3;
		cout << "What is your galaxy's diameter? (in ly)." << endl;
		cin >> s1;
		if (cin.fail() || s1 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		cout << "What is your galaxy's star count?" << endl;
		cin >> s2;
		if (cin.fail() || s2 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		cout << "How old is your galaxy? (in M years)" << endl;
		cin >> s3;
		if (cin.fail() || s3 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		system("cls");

		Galaxy *temp = new Galaxy(s1, s2, s3);
		objects.push_back(temp);
		cout << "\n\nCreating a galaxy.\n\n" << endl;

	}

	else if (x == 3) {
		system("cls");
		int s1, s2, s3, s4;
		cout << "What is your spiral galaxy's diameter? (in ly)." << endl;
		cin >> s1;
		if (cin.fail() || s1 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		cout << "What is your spiral galaxy's star count?" << endl;
		cin >> s2;
		if (cin.fail() || s2 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		cout << "How old is your spiral galaxy? (in M years)" << endl;
		cin >> s3;
		if (cin.fail() || s3 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		cout << "How many arms does your spiral galaxy have?" << endl;
		cin >> s4;
		if (cin.fail() || s4 < 0) {
			throw string("\n\nIncorrect integer value, aborting.\n\n");
			return;
		}
		system("cls");

		SpiralGalaxy *temp = new SpiralGalaxy(s1, s2, s3, s4);
		objects.push_back(temp);
		cout << "\n\nCreating a spiral galaxy.\n\n" << endl;

	}
}
///Main program and the interface.
//int main() {
//
//		vector <AstronomicalObject*> objects;
//		Galaxy galaxy;
//		CosmicVoid cvoid;
//		SpiralGalaxy sgalaxy;
//		objects.push_back(&galaxy);
//		objects.push_back(&cvoid);
//		objects.push_back(&sgalaxy);
//		//cout << *objects[0] << endl;
//		//cout << *objects[1] << endl;
//		//cout << *objects[2] << endl;
//
//	int endp = 0;
//	int option = 0, x;
//	string name;
//
//	do {
//		cout << "What would you like to do?" << endl;
//		cout << "Enter the chosen number and press enter." << endl;
//		cout << "[1] - display the number of existing objects" << endl;
//		cout << "[2] - save an object to a file" << endl;
//		cout << "[3] - read an object from a file" << endl;
//		cout << "[4] - delete the last object in the container" << endl;
//		cout << "[5] - create and add an object to the container" << endl;
//		cout << "[6] - output a string describing an existing object" << endl;
//		cout << "[7] - output a string describing all objects currently in the container" << endl;
//		cout << "[8] - exit the program" << endl;
//
//		try {
//			setOption(option);
//		}
//		catch (string err) {
//			system("cls");
//			cout << err << endl;
//		}
//
//		if (option == 8) {
//			endp = 1;
//		}
//
//		else if (option == 6) {
//			cout << "Please enter the object's number." << endl;
//			cin >> x;
//			try {
//				system("cls");
//				writeString(x, objects);
//			}
//			catch (string err) {
//				system("cls");
//				cout << err << endl;
//			}
//		}
//
//		else if (option == 5) {
//			try {
//				//system("cls");
//				createObject(objects);
//			}
//			catch (string err) {
//				system("cls");
//				cout << err << endl;
//			}
//		}
//
//		else if (option == 7) {
//			system("cls");
//			cout << "\n\nCurrently there are " << objects.size() << " objects in the container:\n\n" << endl;
//			for (x = 0; x < objects.size(); x++) {
//				try {
//					writeString(x, objects);
//				}
//				catch (string err) {
//					system("cls");
//					cout << err << endl;
//				}
//			}
//		}
//
//		else if (option == 4) {
//			try {
//				deleteObject(objects);
//			}
//			catch (string err) {
//				system("cls");
//				cout << err << endl;
//			}
//		}
//
//		else if (option == 1) {
//			system("cls");
//			cout << "\n\nCurrently there are " << objects.size() << " objects in the container.\n\n" << endl;
//		}
//
//		else if (option == 2) {
//			cout << "Please enter the object's number." << endl;
//			cin >> x;
//			cout << "Please enter the desired file name ending with \".txt\"." << endl;
//			cin >> name;
//			try {
//				writeToFile(x, name, objects);
//			}
//			catch (string err) {
//				system("cls");
//				cout << err << endl;
//			}
//		}
//
//		else if (option == 3) {
//			cout << "Please enter the file name ending with \".txt\"." << endl;
//			cin >> name;
//			try {
//				readFromFile(name, objects);
//			}
//			catch (string err) {
//				system("cls");
//				cout << err << endl;
//			}
//		}
//
//		cin.clear();
//		cin.ignore(100, '\n');
//
//	} while (endp == 0);
//
//	return 0;
//}