#include "SOGEQtE/Core/Application.hpp"

#include <QtCore/QLoggingCategory.h>
#include <QtCore/QResource.h>


namespace sogeqte
{
    Q_LOGGING_CATEGORY(AppInitial, "SOGEQtE.Core.Application")

    QTEApplication::QTEApplication(int& argc, char** argv, const QString& aApplicationName) 
        : m_sogeStylesheet("DefaultStyle", "resources/soge.qss")
    {
        #if defined(Q_OS_WIN) && QT_VERSION_CHECK(5, 6, 0) <= QT_VERSION && QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
                QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
        #endif

        QApplication::setOrganizationName("Gaikan Studio");
        QApplication::setApplicationName(aApplicationName);
        QApplication::setApplicationDisplayName("SOGE Editor");
        QApplication::setApplicationVersion("0.0.1"); // TODO: Add versioning

        QApplication* qtApp = new QApplication(argc, argv);
        qtApp->setStyleSheet(m_sogeStylesheet.ToString());
        if (!QResource::registerResource("resources/icons.qrc", "/resources/"))
        {
            qCDebug(AppInitial) << "Failed to register icons resource...";
        }

        m_mainWindow = new QTEMainWindow();
        m_outlinerWidget = new QTEOutlinerWidget(m_mainWindow);
    }

    QTEApplication::~QTEApplication()
    {
        m_qtApplication.reset(nullptr);
    }

    int QTEApplication::Run()
    {
        m_outlinerWidget->show();
        m_mainWindow->show();
        return m_qtApplication->exec();
    }
}