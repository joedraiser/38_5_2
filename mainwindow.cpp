#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    viewHTML=ui->viewHTML;
    editor=ui->editor;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setWebView()
{
    viewHTML->setHtml(editor->toPlainText());
}
