#include "PriceChildren.h"

double PriceChildren::priceByType(int daysRented) const {
    double amount = 1.5;
    if ( daysRented > 3 ){
        amount += ( daysRented - 3 ) * 1.5;
    }
    return amount;
}

int PriceChildren::frequentRenterPointsByType(int daysRented) const {
    return 1;
}

Price* PriceChildren::instance = nullptr;

Price* PriceChildren::getInstance() {
    if(instance == nullptr){
        instance = new PriceChildren();
    }
    return instance;
}