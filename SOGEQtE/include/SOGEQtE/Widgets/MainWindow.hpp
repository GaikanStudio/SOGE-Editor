#ifndef SOGE_WIDGETS_MAINWINDOW_HPP
#define SOGE_WIDGETS_MAINWINDOW_HPP

#include <QtWidgets/QMainWindow.h>
#include <DockManager.h>

#include "SOGEQtE/Widgets/Outliner/OutlinerWidget.hpp"
#include "SOGEQtE/Widgets/ContentBrowser/ContentBrowserWidget.hpp"

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

        // Main docking container
        ads::CDockManager* m_dockManager;
        QTEOutlinerWidget* m_outlinerWidget;
        QTEContentBrowserWidget* m_contentBrowserWidget;

    public:
        explicit QTEMainWindow(QWidget* aParent = nullptr);
        ~QTEMainWindow();


    };
}

#endif // !SOGE_WIDGETS_MAINWINDOW_HPP
