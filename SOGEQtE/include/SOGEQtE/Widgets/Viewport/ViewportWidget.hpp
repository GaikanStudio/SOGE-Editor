#ifndef SOGEQTE_WIDGETS_VIEWPORT_VIEWPORTWIDGET_HPP
#define SOGEQTE_WIDGETS_VIEWPORT_VIEWPORTWIDGET_HPP

#include <QtWidgets/QWidget.h>
#include <QtCore/QScopedPointer.h>


namespace Ui
{
    class Viewport;
}

namespace sogeqte
{
    class QTEViewportWidget : public QWidget
    {
        Q_OBJECT

    private:
        QScopedPointer<Ui::Viewport> m_genUi;

    public:
        QTEViewportWidget(QWidget* aParent = nullptr);
        ~QTEViewportWidget();

    };
}

#endif // !SOGEQTE_WIDGETS_VIEWPORT_VIEWPORTWIDGET_HPP
