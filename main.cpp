#include <QCoreApplication>

#include "coffee.h"
#include "tea.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Coffee *coffee = new Coffee();
    coffee->prepareRecipe();

    return a.exec();
}
