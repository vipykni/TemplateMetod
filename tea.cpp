#include "tea.h"

Tea::Tea()
{

}

void Tea::prepareRecipe(){

    boilWater();
    steepTeaBag();
    pourInCup();
    addLemon();
}
void Tea::steepTeaBag(){

    cout << "Stepping the Tea" << endl;

}
void Tea::addLemon(){

    cout << "Adding Lemon" << endl;

}
