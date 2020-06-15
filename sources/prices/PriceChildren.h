#ifndef PRICECHILDREN_H
#define PRICECHILDREN_H

#include "Price.h"

class PriceChildren : public Price {
public:

    double priceByType(int daysRented);
    int frequentRenterPointsByType(int daysRented);
};

#endif //PRICECHILDREN_H
