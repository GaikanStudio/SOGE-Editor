#include "SOGEQtE/Core/Stylesheet.hpp"

#include <QtCore/QLoggingCategory.h>


namespace sogeqte
{
    Q_LOGGING_CATEGORY(StylesheetDebug, "SOGEQtE.Core.Stylesheet")

    QTEStylesheet::QTEStylesheet(const QString& aStyleName, const QString& aFilePath) : m_styleName(aStyleName),
        m_styleFile(aFilePath)
    {
        if (!m_styleFile.open(QIODeviceBase::OpenModeFlag::ReadOnly))
        {
            qCDebug(StylesheetDebug) << "Failed to load stylesheet file...";
            m_strRepr = "";
        }
        else
        {
            m_strRepr = m_styleFile.readAll();
        }

        m_styleFile.close();
    }

    QTEStylesheet::~QTEStylesheet()
    {
    }

    void QTEStylesheet::Reload()
    {
    }

    void QTEStylesheet::ReloadExternal(const QString& aFilePath)
    {
    }

    QString QTEStylesheet::ToString() const
    {
        return m_strRepr;
    }

    QString QTEStylesheet::GetName() const
    {
        return m_styleName;
    }
}