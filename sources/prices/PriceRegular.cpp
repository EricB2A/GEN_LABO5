#include "PriceRegular.h"

double PriceRegular::priceByType(int daysRented) const {
    double amount = 2;
    if(daysRented > 2){
        amount += (daysRented - 2) * 1.5;
    }
    return amount;
}

int PriceRegular::frequentRenterPointsByType(int daysRented) const {
    return 1;
}

Price* PriceRegular::instance = nullptr;

Price* PriceRegular::getInstance() {
    if(instance == nullptr){
        instance = new PriceRegular();
    }
    return instance;
}

