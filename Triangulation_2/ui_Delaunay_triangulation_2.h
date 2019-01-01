/********************************************************************************
** Form generated from reading UI file 'Delaunay_triangulation_2.ui'
**
** Created: Tue May 5 22:34:20 2015
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELAUNAY_TRIANGULATION_2_H
#define UI_DELAUNAY_TRIANGULATION_2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delaunay_triangulation_2
{
public:
    QAction *actionAbout;
    QAction *actionAboutCGAL;
    QAction *actionQuit;
    QAction *actionInsertRandomPoints;
    QAction *actionMovingPoint;
    QAction *actionInsertPoint;
    QAction *actionClear;
    QAction *actionShowVoronoi;
    QAction *actionShowDelaunay;
    QAction *actionLoadPoints;
    QAction *actionSavePoints;
    QAction *actionCircumcenter;
    QAction *actionShowMAP;
    QAction *actionShowConflictZone;
    QAction *actionHoleDetection;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *toolBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;

    void setupUi(QMainWindow *Delaunay_triangulation_2)
    {
        if (Delaunay_triangulation_2->objectName().isEmpty())
            Delaunay_triangulation_2->setObjectName(QString::fromUtf8("Delaunay_triangulation_2"));
        Delaunay_triangulation_2->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cgal/logos/cgal_icon"), QSize(), QIcon::Normal, QIcon::Off);
        Delaunay_triangulation_2->setWindowIcon(icon);
        actionAbout = new QAction(Delaunay_triangulation_2);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutCGAL = new QAction(Delaunay_triangulation_2);
        actionAboutCGAL->setObjectName(QString::fromUtf8("actionAboutCGAL"));
        actionQuit = new QAction(Delaunay_triangulation_2);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInsertRandomPoints = new QAction(Delaunay_triangulation_2);
        actionInsertRandomPoints->setObjectName(QString::fromUtf8("actionInsertRandomPoints"));
        actionMovingPoint = new QAction(Delaunay_triangulation_2);
        actionMovingPoint->setObjectName(QString::fromUtf8("actionMovingPoint"));
        actionMovingPoint->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cgal/Actions/icons/moving_point.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMovingPoint->setIcon(icon1);
        actionInsertPoint = new QAction(Delaunay_triangulation_2);
        actionInsertPoint->setObjectName(QString::fromUtf8("actionInsertPoint"));
        actionInsertPoint->setCheckable(true);
        actionInsertPoint->setChecked(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cgal/Input/inputPoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertPoint->setIcon(icon2);
        actionClear = new QAction(Delaunay_triangulation_2);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionShowVoronoi = new QAction(Delaunay_triangulation_2);
        actionShowVoronoi->setObjectName(QString::fromUtf8("actionShowVoronoi"));
        actionShowVoronoi->setCheckable(true);
        actionShowVoronoi->setChecked(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cgal/Triangulation_2/Voronoi_diagram_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowVoronoi->setIcon(icon4);
        actionShowDelaunay = new QAction(Delaunay_triangulation_2);
        actionShowDelaunay->setObjectName(QString::fromUtf8("actionShowDelaunay"));
        actionShowDelaunay->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cgal/Actions/icons/triangulation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowDelaunay->setIcon(icon5);
        actionLoadPoints = new QAction(Delaunay_triangulation_2);
        actionLoadPoints->setObjectName(QString::fromUtf8("actionLoadPoints"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadPoints->setIcon(icon6);
        actionSavePoints = new QAction(Delaunay_triangulation_2);
        actionSavePoints->setObjectName(QString::fromUtf8("actionSavePoints"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSavePoints->setIcon(icon7);
        actionCircumcenter = new QAction(Delaunay_triangulation_2);
        actionCircumcenter->setObjectName(QString::fromUtf8("actionCircumcenter"));
        actionCircumcenter->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cgal/Actions/icons/circumcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircumcenter->setIcon(icon8);
        actionShowMAP = new QAction(Delaunay_triangulation_2);
        actionShowMAP->setObjectName(QString::fromUtf8("actionShowMAP"));
        actionShowMAP->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/cgal/Actions/icons/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowMAP->setIcon(icon9);
        actionShowConflictZone = new QAction(Delaunay_triangulation_2);
        actionShowConflictZone->setObjectName(QString::fromUtf8("actionShowConflictZone"));
        actionShowConflictZone->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/cgal/Actions/icons/conflict_zone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowConflictZone->setIcon(icon10);
        actionHoleDetection = new QAction(Delaunay_triangulation_2);
        actionHoleDetection->setObjectName(QString::fromUtf8("actionHoleDetection"));
        actionHoleDetection->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/cgal/Actions/icons/circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHoleDetection->setIcon(icon11);
        centralwidget = new QWidget(Delaunay_triangulation_2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setFocusPolicy(Qt::StrongFocus);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        Delaunay_triangulation_2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Delaunay_triangulation_2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Delaunay_triangulation_2->setStatusBar(statusbar);
        fileToolBar = new QToolBar(Delaunay_triangulation_2);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        Delaunay_triangulation_2->addToolBar(Qt::TopToolBarArea, fileToolBar);
        toolBar = new QToolBar(Delaunay_triangulation_2);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Delaunay_triangulation_2->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(Delaunay_triangulation_2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Delaunay_triangulation_2->setMenuBar(menubar);

        fileToolBar->addAction(actionClear);
        fileToolBar->addAction(actionLoadPoints);
        fileToolBar->addAction(actionSavePoints);
        toolBar->addAction(actionInsertPoint);
        toolBar->addAction(actionMovingPoint);
        toolBar->addAction(actionCircumcenter);
        toolBar->addAction(actionShowConflictZone);
        toolBar->addSeparator();
        toolBar->addAction(actionShowDelaunay);
        toolBar->addAction(actionShowVoronoi);
        toolBar->addSeparator();
        toolBar->addAction(actionShowMAP);
        toolBar->addAction(actionHoleDetection);
        toolBar->addSeparator();
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClear);
        menuFile->addAction(actionLoadPoints);
        menuFile->addAction(actionSavePoints);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionInsertRandomPoints);
        menuTools->addAction(actionInsertPoint);
        menuTools->addAction(actionMovingPoint);
        menuTools->addAction(actionCircumcenter);
        menuTools->addAction(actionShowConflictZone);
        menuTools->addSeparator();
        menuTools->addAction(actionShowDelaunay);
        menuTools->addAction(actionShowVoronoi);
        menuTools->addAction(actionShowMAP);
        menuTools->addAction(actionHoleDetection);
        menuTools->addSeparator();

        retranslateUi(Delaunay_triangulation_2);

        QMetaObject::connectSlotsByName(Delaunay_triangulation_2);
    } // setupUi

    void retranslateUi(QMainWindow *Delaunay_triangulation_2)
    {
        Delaunay_triangulation_2->setWindowTitle(QApplication::translate("Delaunay_triangulation_2", "CGAL Delaunay Triangulation", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Delaunay_triangulation_2", "&About", 0, QApplication::UnicodeUTF8));
        actionAboutCGAL->setText(QApplication::translate("Delaunay_triangulation_2", "About &CGAL", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Delaunay_triangulation_2", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setText(QApplication::translate("Delaunay_triangulation_2", "&Insert random points", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionMovingPoint->setText(QApplication::translate("Delaunay_triangulation_2", "&Simulate insertion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMovingPoint->setToolTip(QApplication::translate("Delaunay_triangulation_2", "Simulate Insertion", "The comment", QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMovingPoint->setStatusTip(QApplication::translate("Delaunay_triangulation_2", "Move mouse with left button pressed to see where point would be inserted", "and its comment", QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionMovingPoint->setWhatsThis(QApplication::translate("Delaunay_triangulation_2", "whats this", "what", QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionInsertPoint->setText(QApplication::translate("Delaunay_triangulation_2", "&Insert Point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInsertPoint->setToolTip(QApplication::translate("Delaunay_triangulation_2", "Insert Point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionInsertPoint->setStatusTip(QApplication::translate("Delaunay_triangulation_2", "Left: Insert vtx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClear->setText(QApplication::translate("Delaunay_triangulation_2", "&Clear", 0, QApplication::UnicodeUTF8));
        actionClear->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionShowVoronoi->setText(QApplication::translate("Delaunay_triangulation_2", "Show &Voronoi Diagram", 0, QApplication::UnicodeUTF8));
        actionShowVoronoi->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionShowDelaunay->setText(QApplication::translate("Delaunay_triangulation_2", "Show &Delaunay Triangulation", 0, QApplication::UnicodeUTF8));
        actionShowDelaunay->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionLoadPoints->setText(QApplication::translate("Delaunay_triangulation_2", "&Load Points...", 0, QApplication::UnicodeUTF8));
        actionLoadPoints->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSavePoints->setText(QApplication::translate("Delaunay_triangulation_2", "&Save Points...", 0, QApplication::UnicodeUTF8));
        actionSavePoints->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionCircumcenter->setText(QApplication::translate("Delaunay_triangulation_2", "&Circumcenter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCircumcenter->setToolTip(QApplication::translate("Delaunay_triangulation_2", "Draw circumcenter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowMAP->setText(QApplication::translate("Delaunay_triangulation_2", "Boundary Detetor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowMAP->setToolTip(QApplication::translate("Delaunay_triangulation_2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">Shape reconstruction</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowMAP->setShortcut(QApplication::translate("Delaunay_triangulation_2", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionShowConflictZone->setText(QApplication::translate("Delaunay_triangulation_2", "Show Conflict Zone", 0, QApplication::UnicodeUTF8));
        actionHoleDetection->setText(QApplication::translate("Delaunay_triangulation_2", "Hole detector", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHoleDetection->setToolTip(QApplication::translate("Delaunay_triangulation_2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">Curve reconstruction</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fileToolBar->setWindowTitle(QApplication::translate("Delaunay_triangulation_2", "File Tools", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Delaunay_triangulation_2", "Visualization Tools", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Delaunay_triangulation_2", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("Delaunay_triangulation_2", "&Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("Delaunay_triangulation_2", "&Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Delaunay_triangulation_2: public Ui_Delaunay_triangulation_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELAUNAY_TRIANGULATION_2_H
