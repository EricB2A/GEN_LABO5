
#include "PriceNewRelease.h"

double PriceNewRelease::priceByType(int daysRented) const {
    return daysRented * 3;
}

int PriceNewRelease::frequentRenterPointsByType(int daysRented) const {
    if(daysRented > 1){
        return 2;
    }
    return 1;
}

Price* PriceNewRelease::instance = nullptr;

Price* PriceNewRelease::getInstance() {
    if(instance == nullptr){
        instance = new PriceNewRelease();
    }
    return instance;
}
