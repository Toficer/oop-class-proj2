#include <iostream>
#include "Moon.h"
using namespace std;

int Moon::returnDiameter() {
	return m_diameter_km;
}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Moon::Moon() {

	m_diameter_km = 3400;
	humans_visited = 1;

#ifdef _DEBUG
	cout << "Moon created." << endl; //debug-only message
#endif

}


//------------------------------------------------------------------------------------------NEXT CONSTRUCTOR


Moon::Moon(const Moon &m) {

	//Note: a standard copy-constructor could have been used (no memory allocation)
	//implemented a custom one to display a _DEBUG message

	m_diameter_km = m.m_diameter_km;
	humans_visited = m.humans_visited;

#ifdef _DEBUG
	cout << "Moon copied." << endl; //debug-only message
#endif

}


//------------------------------------------------------------------------------------------DESTRUCTOR


Moon::~Moon() {
	//Note: a standard destructor could have been used (no memory allocation)
	//implemented a custom one to display a _DEBUG message

#ifdef _DEBUG
	cout << "Moon deleted." << endl; //debug-only message
#endif
}


//------------------------------------------------------------------------------------------OPERATORS


bool Moon::operator==(const Moon &m) {
	if (m.m_diameter_km == m_diameter_km && m.humans_visited == humans_visited) return true;
	else return false;
}

Moon& Moon::operator=(const Moon &m) {
	
	m_diameter_km = m.m_diameter_km;
	humans_visited = m.humans_visited;

	return *this;
}