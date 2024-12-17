#include "SOGEQtE/Widgets/ContentBrowser/ContentBrowserWidget.hpp"
#include "SOGEQtE/Widgets/ContentBrowser/ui_ContentBrowser.hpp"


namespace sogeqte
{
    QTEContentBrowserWidget::QTEContentBrowserWidget(QWidget* aParent) : QWidget(aParent), m_genUi(new Ui::ContentBrowser())
    {
        m_genUi->setupUi(this);
    }

    QTEContentBrowserWidget::~QTEContentBrowserWidget()
    {

    }
}