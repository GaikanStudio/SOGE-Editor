#include "SOGEQtE/Widgets/MainWindow.hpp"
#include "SOGEQtE/Widgets/ui_MainWindow.hpp"

#include <QtWidgets/QLabel.h>


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
        m_outlinerWidget = new QTEOutlinerWidget(this);
        m_contentBrowserWidget = new QTEContentBrowserWidget(this);
        m_viewportWidget = new QTEViewportWidget(this);

        ads::CDockWidget* outlinerDock = new ads::CDockWidget("Outliner");
        ads::CDockWidget* contentBrowserDock = new ads::CDockWidget("ContentBrowser");
        ads::CDockWidget* viewportDock = new ads::CDockWidget("Viewport");

        outlinerDock->setWidget(m_outlinerWidget);
        contentBrowserDock->setWidget(m_contentBrowserWidget);
        viewportDock->setWidget(m_viewportWidget);

        // Add the dock widget to the top dock widget area
        m_dockManager->addDockWidget(ads::RightDockWidgetArea, outlinerDock);
        m_dockManager->addDockWidget(ads::TopDockWidgetArea, contentBrowserDock);
        m_dockManager->addDockWidget(ads::CenterDockWidgetArea, viewportDock);
    }

    QTEMainWindow::~QTEMainWindow()
    {
        delete m_genUi;
    }
}
