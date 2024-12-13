#include "SOGEQtE/Core/Application.hpp"

#include <QtCore/qlibraryinfo.h>
#include <QtCore/qloggingcategory.h>
#include <QtCore/qtranslator.h>

#include <QtGui/qundostack.h>
#include <QtGui/qfontdatabase.h>
#include <QtWidgets/qapplication.h>

#include <QtQml/qqmlfileselector.h>


namespace sogeqte
{
    Q_LOGGING_CATEGORY(qtApp, "app.include.sogeqte.core.application")

    static QGuiApplication* CreateQGuiApplication(int& argc, char** argv, const QString& aApplicationName)
    {
        #if defined(Q_OS_WIN) && QT_VERSION_CHECK(5, 6, 0) <= QT_VERSION && QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
                QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
        #endif

        QApplication::setOrganizationName("Gaikan");
        QApplication::setApplicationName(aApplicationName);
        QApplication::setApplicationDisplayName("SOGE Editor");
        QApplication::setApplicationVersion("0.0.1"); // TODO: Add versioning

        QApplication* qtApp = new QApplication(argc, argv);
        return qtApp;
    }

    QTEApplication::QTEApplication(int& argc, char** argv, const QString& aApplicationName)
        : m_qtApp(CreateQGuiApplication(argc, argv, aApplicationName)), m_qmlAppEngine(new QQmlApplicationEngine())
    {
        #if defined(Q_OS_WIN) || defined(Q_OS_MACOS)
            QQmlFileSelector fileSelector(m_qmlAppEngine.data());
            fileSelector.setExtraSelectors(QStringList() << QLatin1String("NativeMenuBar"));
        #endif

        m_qmlAppEngine->load("qrc:/qt/qml/sogeqte/main.qml");
        if (m_qmlAppEngine->rootObjects().isEmpty())
        {
            qCDebug(qtApp) << "Failed to load main.qml";
        }
    }

    QTEApplication::~QTEApplication()
    {
        m_qmlAppEngine.reset();
    }

    int QTEApplication::Run()
    {
        return m_qtApp->exec();
    }
}