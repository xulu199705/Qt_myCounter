#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QTextEdit>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextCursor>
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	/* Display action->toolTip() in statusbar */
	ui->actionOpen->setStatusTip(ui->actionOpen->toolTip());
	ui->actionSave->setStatusTip(ui->actionSave->toolTip());
	ui->actionQuit->setStatusTip(ui->actionQuit->toolTip());
	ui->actionClear->setStatusTip(ui->actionClear->toolTip());
	ui->actionHelp->setStatusTip(ui->actionHelp->toolTip());
	ui->actionAbout->setStatusTip(ui->actionAbout->toolTip());

	/* actionOpen		-->		OpenFile() */
	QObject::connect(ui->actionOpen, SIGNAL(triggered(bool)), this, SLOT(OpenFile()));
	/* actionSave		-->		SaceFile() */
	QObject::connect(ui->actionSave, SIGNAL(triggered(bool)), this, SLOT(SaveFile()));
	/* actionQuit		-->		close() */
	QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), this, SLOT(close()));
	/* actionClear		-->		deleteData() */
	QObject::connect(ui->actionClear, SIGNAL(triggered(bool)), this, SLOT(deleteData()));
	/* actionAbout		-->		AppInfo() */
	QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(AppInfo()));
	/* pushButtonCount	-->		Count() */
	QObject::connect(ui->pushButtonCount, SIGNAL(clicked()), this, SLOT(Count()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::deleteData()
{
	ui->textEditDisplay->clear();
	ui->lineEditTotal->clear();
	ui->lineEditLetterNum->clear();
	ui->lineEditLetter->clear();
}

void MainWindow::AppInfo()
{
	QMessageBox::information(NULL, tr("About"), tr("Letter Counter\r\nVersion 1.0\r\nCoded by DarkBlue"));
}

void MainWindow::OpenFile()
{
	QString path = QFileDialog::getOpenFileName(this, tr("Open Text"), "./Saved", tr("Text Files(*.txt)"));

	QFile file(path);

	if (file.open((QIODevice::ReadOnly | QIODevice::Text)))
	{
		QTextStream in(&file);

		while (!in.atEnd())
		{
			QString line = in.readLine();
			ui->textEditDisplay->append(line);
		}

		file.close();
	}

// 	QTextCursor cur = ui->textEditDisplay->textCursor();
// 	cur.movePosition(QTextCursor::End, QTextCursor::MoveAnchor, 1);
// 	ui->textEditDisplay->setTextCursor(cur);
}

void MainWindow::SaveFile()
{
	QString path = QFileDialog::getSaveFileName(this, tr("Save File"), "./Saved/Result.txt", tr("Text Files(*txt)"));
	
	bool flag = (ui->lineEditLetter->text() == tr("")) || (ui->lineEditLetterNum->text() == tr("")) || (ui->lineEditTotal->text() == tr(""));
	QFile file(path);

	if (!flag && file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		QTextStream out(&file);

		out << QString::fromLocal8Bit("加载字串长度 : ") << ui->lineEditTotal->text() << endl;
		out << QString::fromLocal8Bit("出现字母个数 : ") << ui->lineEditLetterNum->text() << endl;
		out << QString::fromLocal8Bit("频次最多字母 : ") << ui->lineEditLetter->text() << endl;

		file.close();
	}

}

void MainWindow::Count()
{
	int cnt[26] = { 0 };
	QString str = ui->textEditDisplay->toPlainText();
	int len = str.length(), max = 0;
	char ch, maxLetter;

	for (int i = 0; i < len; i++)
	{
		ch = str.at(i).toUpper().toLatin1();
		if (ch >= 'A' && ch <= 'Z')
		{
			cnt[ch - 65]++;
			if (cnt[ch - 65] > max)
			{
				max = cnt[ch - 65];
				maxLetter = ch;
			}
		}
	}

	int numext = 0;
	for (int i = 0; i < 26; i++)
	{
		if(cnt[i] != 0)
		{
			numext++;
		}
	}

	ui->lineEditTotal->setText(QString::number(len, 10));
	ui->lineEditLetterNum->setText(QString::number(numext, 10));
	ui->lineEditLetter->setText(QString(maxLetter));
}
