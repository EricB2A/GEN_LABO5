#ifndef PRICEREGULAR_H
#define PRICEREGULAR_H

#include "Price.h"

class PriceRegular : public Price {
public:

    double priceByType(int daysRented);
    int frequentRenterPointsByType(int daysRented);
};

#endif //PRICEREGULAR_H
