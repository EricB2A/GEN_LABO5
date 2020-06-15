#ifndef PRICENEWRELEASE_H
#define PRICENEWRELEASE_H

#include "Price.h"

class PriceNewRelease : public Price {
public:

    double priceByType(int daysRented){
        return daysRented * 3;
    }


    int frequentRenterPointsByType(int daysRented){
        if(daysRented > 1){
            return 2;
        }
        return 1;
    }



};

#endif //PRICENEWRELEASE_H
