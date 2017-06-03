#pragma once

#include <QDialog>
#include "ui_creationWindow.h"
#include <vector>

class creationWindow : public QDialog, public Ui::creationWindow
{
	Q_OBJECT

public:
	creationWindow(QWidget *parent = Q_NULLPTR);
};