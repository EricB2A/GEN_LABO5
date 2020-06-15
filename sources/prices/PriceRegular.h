#ifndef PRICEREGULAR_H
#define PRICEREGULAR_H

#include "Price.h"

class PriceRegular : public Price {
public:

    double priceByType(int daysRented) const;
    int frequentRenterPointsByType(int daysRented) const;
    static Price* getInstance();

private:
    PriceRegular() = default;
    static Price* instance;
};

#endif //PRICEREGULAR_H
