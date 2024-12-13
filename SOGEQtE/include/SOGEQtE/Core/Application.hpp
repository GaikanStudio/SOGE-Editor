#ifndef SOGEQTE_CORE_APPLICATION_HPP
#define SOGEQTE_CORE_APPLICATION_HPP

#include <QtGui/qguiapplication.h>
#include <QtCore/qscopedpointer.h>
#include <QtQml/qqmlapplicationengine.h>


namespace sogeqte
{
    class QTEApplication
    {
    private:
        QScopedPointer<QGuiApplication> m_qtApp;
        QScopedPointer<QQmlApplicationEngine> m_qmlAppEngine;

    public:
        QTEApplication(int& argc, char** argv, const QString& aApplicationName);
        ~QTEApplication();

        int Run();

    };
}

#endif // !SOGEQTE_CORE_APPLICATION_HPP
