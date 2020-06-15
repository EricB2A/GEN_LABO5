#ifndef PRICENEWRELEASE_H
#define PRICENEWRELEASE_H

#include "Price.h"

class PriceNewRelease : public Price {
public:

    double priceByType(int daysRented) const;
    int frequentRenterPointsByType(int daysRented) const;
    static Price* getInstance();

private:
    PriceNewRelease() = default;
    static Price* instance;
};

#endif //PRICENEWRELEASE_H
