#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"

class Coffee : public CaffeineBeverage
{
public:
    Coffee();
    void brew();
    void addCondiments();
};

#endif // COFFEE_H
