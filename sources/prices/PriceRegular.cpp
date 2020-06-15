#include "PriceRegular.h"

double PriceRegular::priceByType(int daysRented){
    double amount = 2;
    if(daysRented > 2){
        amount += (daysRented - 2) * 1.5;
    }
    return amount;
}

int PriceRegular::frequentRenterPointsByType(int daysRented){
    return 1;
}
