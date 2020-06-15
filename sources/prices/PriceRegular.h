#ifndef PRICEREGULAR_H
#define PRICEREGULAR_H

#include "Price.h"

class PriceRegular : public Price {
public:

    double priceByType(int daysRented){
        double amount = 2;
        if(daysRented > 2){
            amount += (daysRented - 2) * 1.5;
        }
        return amount;
    }

    int frequentRenterPointsByType(int daysRented){
        return 1;
    }
};

#endif //PRICEREGULAR_H
