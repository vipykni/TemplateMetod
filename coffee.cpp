#include "coffee.h"

Coffee::Coffee()
{

}

void Coffee:: prepareRecipe(){

    boilWater();
    brewCoffeeGrinds();
    pourInCup();
    addShugarAndMilk();

}
void Coffee:: brewCoffeeGrinds(){

    cout << "Dripping Coffee through filter" << endl;


}
void Coffee:: addShugarAndMilk(){

    cout << "Adding shugar and milk" << endl;
}
