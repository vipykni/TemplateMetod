#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"

class Coffee :: public CaffeineBeverage
{
public:
    Coffee();
    virtual void prepareRecipe();
    void brewCoffeeGrinds();
    void addShugarAndMilk();
};

#endif // COFFEE_H
