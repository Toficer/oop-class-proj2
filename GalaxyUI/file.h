#pragma once

#include <QDialog>
#include "ui_file.h"
#include <vector>

class readFileD : public QDialog, public Ui::readFileD
{
	Q_OBJECT

public:
	readFileD(QWidget *parent = Q_NULLPTR);
};