#ifndef SOGEQTE_CORE_APPLICATION_HPP
#define SOGEQTE_CORE_APPLICATION_HPP

#include <QtCore/QString.h>
#include <QtCore/QScopedPointer.h>

#include <QtWidgets/QApplication.h>
#include <QtGui/QGuiApplication.h>

#include "SOGEQtE/Core/Stylesheet.hpp"
#include "SOGEQtE/Widgets/MainWindow.hpp"
#include "SOGEQtE/Widgets/Outliner/OutlinerWidget.hpp"


namespace sogeqte
{
    class QTEApplication
    {
    private:
        QScopedPointer<QGuiApplication> m_qtApplication;
        QTEStylesheet m_sogeStylesheet;

        // Widgets

        QTEMainWindow* m_mainWindow;
        QTEOutlinerWidget* m_outlinerWidget;

    public:
        QTEApplication(int& argc, char** argv, const QString& aApplicationName);
        ~QTEApplication();

        int Run();

    };
}

#endif // !SOGEQTE_CORE_APPLICATION_HPP
