#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GalaxyUI.h"
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "CosmicVoid.h"
#include "SpiralGalaxy.h"
#include "creationWindow.h"
#include "file.h"
#include <vector>

class GalaxyUI : public QMainWindow
{
	Q_OBJECT

public:
	GalaxyUI(QWidget *parent = Q_NULLPTR);
	void writeString(int x, std::vector <AstronomicalObject*> objects);

public slots:
	void displayAll();
	void displaySelected();
	void openCreator();
	void createObject();
	void deleteObject();
	void objectCount();
	void readFile();
	void writeFile();
	void openReading();
	void openWriting();
	void imageDisplay();


private:
	Ui::GalaxyUIClass ui;
	creationWindow window;
	readFileD readw;
	readFileD writew;
	std::vector <AstronomicalObject*> objects;
};
