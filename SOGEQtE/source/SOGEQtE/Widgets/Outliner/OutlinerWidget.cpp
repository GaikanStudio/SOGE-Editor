#include "SOGEQtE/Widgets/Outliner/OutlinerWidget.hpp"
#include "SOGEQtE/Widgets/Outliner/ui_OutlinerWidget.hpp"


namespace sogeqte
{
    QTEOutlinerWidget::QTEOutlinerWidget(QWidget* aParent) : QWidget(aParent), m_genUi(new Ui::OutlinerWidget())
    {
        m_genUi->setupUi(this);
    }

    QTEOutlinerWidget::~QTEOutlinerWidget()
    {

    }
}
