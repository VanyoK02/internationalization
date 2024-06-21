#ifndef GENERALTAB_H
#define GENERALTAB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QColorDialog;
class QPushButton;
QT_END_NAMESPACE

#if defined(GENERALTABLIB_LIBRARY)
#  define GENERALTABLIB_EXPORT Q_DECL_EXPORT
#else
#  define GENERALTABLIB_EXPORT Q_DECL_IMPORT
#endif

class GENERALTABLIB_EXPORT GeneralTab : public QWidget
{
    Q_OBJECT

public:
    GeneralTab(QWidget *parent = nullptr);

private slots:
    void chooseBackgroundColor();
    void chooseModelColor();

private:
    QPushButton *backgroundColorButton;
    QPushButton *modelColorButton;
    QCheckBox *askOnExitCheckBox;
    QCheckBox *showCubeCheckBox;
    QColor backgroundColor;
    QColor modelColor;
};

#endif // GENERALTAB_H
