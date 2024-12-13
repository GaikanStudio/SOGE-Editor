#include "SOGEQtE/Core/Application.hpp"

int main(int argc, char** argv)
{
    auto app = new sogeqte::QTEApplication(argc, argv, "SOGEEditor");
    return app->Run();
}