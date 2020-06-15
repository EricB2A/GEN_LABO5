#ifndef PRICECHILDREN_H
#define PRICECHILDREN_H

#include "Price.h"

class PriceChildren : public Price {
public:

    double priceByType(int daysRented){
        double amount = 1.5;
        if ( daysRented > 3 ){
            amount += ( daysRented - 3 ) * 1.5;
        }
        return amount;
    }

    int frequentRenterPointsByType(int daysRented){
        return 1;
    }
};

#endif //PRICECHILDREN_H
