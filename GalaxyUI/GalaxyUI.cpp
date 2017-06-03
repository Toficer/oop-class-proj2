#include "GalaxyUI.h"
#include "Star.h"
#include "Planet.h"
#include "Moon.h"
#include "AstronomicalObject.h"
#include "Galaxy.h"
#include "CosmicVoid.h"
#include "SpiralGalaxy.h"
#include "creationWindow.h"
#include <fstream>
using namespace std;

void GalaxyUI::writeString(int x, vector <AstronomicalObject*> objects) {
	/*if (x >= objects.size()) {
		throw string("\n\nThere is no object of that number.\n\n");
	}*/

	ui.textWindow->append(QString::fromStdString(objects[x]->toString()));
}

GalaxyUI::GalaxyUI(QWidget *parent)
	: QMainWindow(parent)
{
	Galaxy *galaxy = new Galaxy;
	CosmicVoid *cvoid = new CosmicVoid;
	SpiralGalaxy *sgalaxy = new SpiralGalaxy;
	objects.push_back(galaxy);
	objects.push_back(cvoid);
	objects.push_back(sgalaxy);
	ui.setupUi(this);
	ui.listWidget->setCurrentRow(0);
	QObject::connect(window.createObjB, SIGNAL(clicked()), this, SLOT(createObject()));
	QObject::connect(readw.readObjB, SIGNAL(clicked()), this, SLOT(readFile()));
	QObject::connect(writew.readObjB, SIGNAL(clicked()), this, SLOT(writeFile()));
}

void GalaxyUI::displayAll() {
	ui.textWindow->clear();
	for (int x = 0; x < this->objects.size(); x++) {
		writeString(x, objects);
	}
}

void GalaxyUI::createObject() {
	ui.textWindow->clear();
	int type, diameter, age, star, arm, life;

	type = window.listWidget->currentRow()+1;
	diameter = window.diameterEdit->text().toInt();
	age = window.ageEdit->text().toInt();
	star = window.starEdit->text().toInt();
	arm = window.armEdit->text().toInt();
	life = window.lifeEdit->text().toInt();

	if (type == 1) {
		CosmicVoid *temp = new CosmicVoid(life);
		objects.push_back(temp);
		ui.listWidget->addItem("cosmic void");
	}

	else if (type == 2) {
		Galaxy *temp = new Galaxy(diameter, star, age);
		objects.push_back(temp);
		ui.listWidget->addItem("galaxy");
	}

	else if (type == 3) {
		SpiralGalaxy *temp = new SpiralGalaxy(diameter, star, age, arm);
		objects.push_back(temp);
		ui.listWidget->addItem("spiral galaxy");
	}
	
}

void GalaxyUI::deleteObject() {
	if (objects.size() > 0) {
		ui.listWidget->takeItem(objects.size() - 1);
		objects.pop_back();
	}
	else return;
}

void GalaxyUI::displaySelected() {
	ui.textWindow->clear();
	writeString(ui.listWidget->currentRow(), objects);
}

void GalaxyUI::objectCount() {
	ui.textWindow->clear();
	ui.textWindow->append("Objects currently in the container:");
	ui.textWindow->append(QString::number(objects.size()));
}

void GalaxyUI::openCreator() {
	window.listWidget->setCurrentRow(0);
	window.exec();

}

void GalaxyUI::openReading() {
	readw.exec();

}

void GalaxyUI::openWriting() {
	writew.exec();

}

void GalaxyUI::readFile() {
	
	string name = readw.lineEdit->text().toStdString();

	int s1 = 0;
	ifstream input;
	input.open(name);

	if (!input.is_open()) {
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("File doesn't exist or couldn't be accessed."));
		return;
	}

	input >> s1;

	if (s1 == 1) {
		CosmicVoid *temp = new CosmicVoid();
		temp[0].readString(input);
		objects.push_back(temp);
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("Object created."));
		ui.listWidget->addItem("cosmic void");
	}
	else if (s1 == 2) {
		Galaxy *temp = new Galaxy();
		temp[0].readString(input);
		objects.push_back(temp);
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("Object created."));
		ui.listWidget->addItem("galaxy");
	}
	else if (s1 == 3) {
		SpiralGalaxy *temp = new SpiralGalaxy();
		temp[0].readString(input);
		objects.push_back(temp);
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("Object created."));
		ui.listWidget->addItem("spiral galaxy");
	}
	else {
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("File doesn't contain a recognized object."));
		return;
	}
	input.close();
}

void GalaxyUI::writeFile() {

	string name = writew.lineEdit->text().toStdString();

	ofstream output;
	output.open(name);

	if (!output.is_open()) {
		ui.textWindow->clear();
		ui.textWindow->append(QString::fromStdString("File couldn't be created."));
		return;
	}

	output << *objects[ui.listWidget->currentRow()];
	ui.textWindow->clear();
	ui.textWindow->append(QString::fromStdString("Object saved."));
	output.close();
}

void GalaxyUI::imageDisplay() {
		ui.label->setPixmap(QPixmap(QString::fromStdString(objects[ui.listWidget->currentRow()]->returnImage())));
		ui.label->show();
}