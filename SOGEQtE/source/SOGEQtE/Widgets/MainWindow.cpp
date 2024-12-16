#include "SOGEQtE/Widgets/MainWindow.hpp"
#include "SOGEQtE/Widgets/ui_MainWindow.hpp"


namespace sogeqte
{
    // IMPORTANT NOTE
    //
    // ADS library drags some it's fucking resources like stylesheets and icons.
    // So, because we don't really give a fuck about them, this lib getting
    // upset a little bit and will spit some errors to you. For now, just
    // (re)compile this library with the **DockManager::loadStylesheet(void)**
    // being commentet by you. I'm figure it out ASAP.
    //
    // !IMPORTANT NOTE

    QTEMainWindow::QTEMainWindow(QWidget* aParent) : QMainWindow(aParent), m_genUi(new Ui::MainWindow())
    {
        this->setMinimumSize(800, 600);
        m_genUi->setupUi(this);

        m_dockManager = new ads::CDockManager(this);
    }

    QTEMainWindow::~QTEMainWindow()
    {
        delete m_genUi;
    }
}
