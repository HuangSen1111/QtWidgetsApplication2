#pragma once

#include "ui_Tutorial.h"
#include "textPage.h"
#include "powerShell.h"
#include "Projecter.h"
#include <qmainwindow.h>
#include <QList>
#include <QFile>
#include <qtextstream.h>
#include <QFileInfo>
#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QTreeWidgetItem>

namespace Ui {
	class Tutorial;
}

class Tutorial :public QMainWindow {
	Q_OBJECT

public:
	Tutorial(QMainWindow* parent = nullptr);
	~Tutorial();
	struct Tab {
		QString file;
		QString text;
		textPage* widget;
	};
	QList<textPage*> Tabs;
	QList<powerShell*> cmdTabs;

private:
	Ui::Tutorial* ui;
	textPage* currentTab;
	Projecter* project;
	QList<QTreeWidgetItem*> ProjectFilesItem;

private slots:
	void newFile();
	void newCommand();
	void openFile();
	void openProject();
	void saveFile();
	void showCommand();
	void printCode();
};