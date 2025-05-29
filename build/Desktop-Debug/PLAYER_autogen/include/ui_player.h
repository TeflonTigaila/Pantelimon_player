/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QTextEdit *textEdit;
    QScrollBar *verticalScrollBar;
    QFrame *frame;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *player)
    {
        if (player->objectName().isEmpty())
            player->setObjectName("player");
        player->resize(659, 316);
        player->setStyleSheet(QString::fromUtf8("background-color: grey;\n"
"border-color:black ;\n"
""));
        centralwidget = new QWidget(player);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(395, 10, 251, 211));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 371, 31));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(361, 60, 20, 221));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.04, y1:0.05, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 60, 351, 221));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 280, 191, 25));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(200, 280, 181, 25));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 230, 41, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 230, 41, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 230, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(520, 230, 41, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(560, 230, 41, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(600, 230, 41, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Estrangelo Edessa\";\n"
""));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(400, 280, 241, 23));
        progressBar->setValue(24);
        player->setCentralWidget(centralwidget);

        retranslateUi(player);

        QMetaObject::connectSlotsByName(player);
    } // setupUi

    void retranslateUi(QMainWindow *player)
    {
        player->setWindowTitle(QCoreApplication::translate("player", "player", nullptr));
        textEdit->setHtml(QCoreApplication::translate("player", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Source Code Pro'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Song name made by (etc)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("player", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("player", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class player: public Ui_player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
