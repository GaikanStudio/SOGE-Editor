#include "SOGEQtE/Widgets/Viewport/ViewportWidget.hpp"
#include "SOGEQtE/Widgets/Viewport/ui_ViewportWidget.hpp"


namespace sogeqte
{
    QTEViewportWidget::QTEViewportWidget(QWidget* aParent) : QWidget(aParent), m_genUi(new Ui::Viewport())
    {
        m_genUi->setupUi(this);
    }

    QTEViewportWidget::~QTEViewportWidget()
    {

    }
}