#ifndef HOTKEYS_H
#define HOTKEYS_H

#include <QWidget>
#include <QtGlobal>

class HotkeysTab : public QWidget
{
    Q_OBJECT

public:
    HotkeysTab(QWidget *parent = nullptr);
};

// Экспорт функции createHotkeysTab из DLL
extern "C" Q_DECL_EXPORT QWidget* createHotkeysTab(QWidget* parent);

#endif // HOTKEYS_H
