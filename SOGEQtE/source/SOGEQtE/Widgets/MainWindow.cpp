#include "SOGEQtE/Widgets/MainWindow.hpp"
#include "SOGEQtE/Widgets/ui_MainWindow.hpp"


namespace sogeqte
{
    QTEMainWindow::QTEMainWindow(QWidget* aParent) : QMainWindow(aParent), m_genUi(new Ui::MainWindow())
    {
        this->setMinimumSize(800, 600);
        m_genUi->setupUi(this);
    }

    QTEMainWindow::~QTEMainWindow()
    {
        delete m_genUi;
    }
}
