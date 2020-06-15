#ifndef PRICECHILDREN_H
#define PRICECHILDREN_H

#include "Price.h"

class PriceChildren : public Price {
public:

    double priceByType(int daysRented) const;
    int frequentRenterPointsByType(int daysRented) const;
    static Price* getInstance();

private:
    PriceChildren() = default;
    static Price* instance;
};

#endif //PRICECHILDREN_H
