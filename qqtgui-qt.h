#ifndef QQTGUIQT_H
#define QQTGUIQT_H

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#include <QtCore>
#include <QtGui>
#include <QWSInputMethod>
#else
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtGlobal>
#endif

#include <QApplication>
#include <QTranslator>
#include <QDebug>

#include <QPixmap>
#include <QImage>
#include <QMovie>
#include <QTime>
#include <QThread>
#include <QTimer>
#include <QSettings>
#include <QQueue>
#include <QMutex>
#include <QList>
#include <QSemaphore>
#include <QStylePainter>
#include <QMouseEvent>
#include <QUuid>

#include <QPrinter>
#include <QPrintDialog>
#include <QPrintPreviewDialog>

#include <QTextFormat>
#include <QTextTable>
#include <QTextEdit>
#include <QTextBrowser>
#include <QTextCodec>
#include <QFont>

#include <QFileInfo>
#include <QFile>
#include <QDir>

#include <QMessageBox>
#include <QSplashScreen>
#include <QWidget>
#include <QDesktopWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QStackedWidget>
#include <QLabel>
#include <QLayout>

#include <QTableView>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QItemSelectionModel>
#include <QItemDelegate>

#endif // QQTGUIQT_H
