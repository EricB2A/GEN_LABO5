#ifndef PRICENEWRELEASE_H
#define PRICENEWRELEASE_H

#include "Price.h"

class PriceNewRelease : public Price {
public:

    double priceByType(int daysRented);
    int frequentRenterPointsByType(int daysRented);
};

#endif //PRICENEWRELEASE_H
