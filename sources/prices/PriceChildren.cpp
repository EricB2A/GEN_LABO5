#include "PriceChildren.h"

double PriceChildren::priceByType(int daysRented){
    double amount = 1.5;
    if ( daysRented > 3 ){
        amount += ( daysRented - 3 ) * 1.5;
    }
    return amount;
}

int PriceChildren::frequentRenterPointsByType(int daysRented){
    return 1;
}