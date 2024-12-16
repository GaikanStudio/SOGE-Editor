#ifndef SOGE_WIDGETS_MAINWINDOW_HPP
#define SOGE_WIDGETS_MAINWINDOW_HPP

#include <QtWidgets/QMainWindow.h>

namespace Ui
{
    class MainWindow;
}

namespace sogeqte
{

    class QTEMainWindow : public QMainWindow
    {
        Q_OBJECT

    private:
        Ui::MainWindow* m_genUi;

    public:
        explicit QTEMainWindow(QWidget* aParent = nullptr);
        ~QTEMainWindow();


    };
}

#endif // !SOGE_WIDGETS_MAINWINDOW_HPP
