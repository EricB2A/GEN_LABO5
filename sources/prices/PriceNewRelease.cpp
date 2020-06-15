
#include "PriceNewRelease.h"

double PriceNewRelease::priceByType(int daysRented){
    return daysRented * 3;
}

int PriceNewRelease::frequentRenterPointsByType(int daysRented){
    if(daysRented > 1){
        return 2;
    }
    return 1;
}
