#ifndef SOGEQTE_CORE_STYLESHEET_HPP
#define SOGEQTE_CORE_STYLESHEET_HPP

#include <QtCore/QFile.h>
#include <QtCore/QString.h>


namespace sogeqte
{
    class QTEStylesheet
    {
    private:
        QFile m_styleFile;
        QString m_styleName;
        QString m_strRepr;

    public:
        QTEStylesheet(const QString& aStyleName, const QString& aFilePath);
        ~QTEStylesheet();

        void Reload();
        void ReloadExternal(const QString& aFilePath);

        QString ToString() const;
        QString GetName() const;

    };
}

#endif // !SOGEQTE_CORE_STYLESHEET_HPP
