#include "powerShell.h"
#include "ui_powerShell.h"

powerShell::powerShell(QWidget *parent)
	: QDockWidget(parent),
	ui(new Ui::powerShell)
{
	ui->setupUi(this);

	ui->textEdit->clear();
	QProcess PowerShell(this);
	PowerShell.setProgram("powershell");
	QStringList argument;
	argument << "/c" << ui->lineEdit->text();
	PowerShell.setArguments(argument);
	PowerShell.start();
	PowerShell.waitForStarted(); //�ȴ���������
	PowerShell.waitForFinished();//�ȴ�����ر�
	QString temp = QString::fromLocal8Bit(process.readAllStandardOutput()); //���������Ϣ
	ui->textEdit->setText(temp);
}

powerShell::~powerShell()
{
	delete ui;
}
