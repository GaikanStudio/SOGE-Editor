#ifndef SOGEQTE_WIDGETS_CONTENTBROWSER_CONTENTBROWSERWIDGET_HPP
#define SOGEQTE_WIDGETS_CONTENTBROWSER_CONTENTBROWSERWIDGET_HPP

#include <QtWidgets/QWidget.h>
#include <QtCore/QScopedPointer.h>


namespace Ui
{
    class ContentBrowser;
}

namespace sogeqte
{
    class QTEContentBrowserWidget : public QWidget
    {
        Q_OBJECT

    private:
        QScopedPointer<Ui::ContentBrowser> m_genUi;

    public:
        QTEContentBrowserWidget(QWidget* aParent = nullptr);
        ~QTEContentBrowserWidget();


    };
}

#endif // SOGEQTE_WIDGETS_CONTENTBROWSER_CONTENTBROWSERWIDGET_HPP
