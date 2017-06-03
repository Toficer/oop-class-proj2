#include "GalaxyUI.h"
#include <QtWidgets/QApplication>
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

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GalaxyUI w;
	w.show();
	return a.exec();
}
