#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

#include <iostream>
using namespace std;

class CaffeineBeverage
{
public:
    CaffeineBeverage();
    void prepareRecipe();
    virtual void boilWater() = 0;
    void brew();
    void pourInCup();
    virtual void addCondiments() = 0;
};

#endif // CAFFEINEBEVERAGE_H
