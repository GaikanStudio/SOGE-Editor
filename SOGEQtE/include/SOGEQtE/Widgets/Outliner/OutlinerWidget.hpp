#ifndef SOGEQTE_WIDGETS_OUTLINER_OUTLINERWIDGET_HPP
#define SOGEQTE_WIDGETS_OUTLINER_OUTLINERWIDGET_HPP

#include <QtWidgets/QWidget>
#include <QtCore/QScopedPointer.h>


namespace Ui
{
    class OutlinerWidget;
}

namespace sogeqte
{
    class QTEOutlinerWidget : public QWidget
    {
        Q_OBJECT

    private:
        QScopedPointer<Ui::OutlinerWidget> m_genUi;

    public:
        QTEOutlinerWidget(QWidget* aParent = nullptr);
        ~QTEOutlinerWidget();


    };
}

#endif // !SOGEQTE_WIDGETS_OUTLINER_OUTLINERWIDGET_HPP
