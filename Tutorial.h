#pragma once

#include "ui_Tutorial.h"
#include "textPage.h"
#include <qmainwindow.h>
#include <QtCore/QList>

namespace Ui {
	class Tutorial;
}

class Tutorial :public QMainWindow {
	Q_OBJECT

public:
	Tutorial();
	~Tutorial();
	struct Tab {
		QString file;
		QString text;
		textPage* widget;
	};
	QList<Tab*> Tabs;

private:
	Ui::Tutorial* ui;
	textPage* currentTab;

private slots:

};