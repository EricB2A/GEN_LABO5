#include "Movie.h"

const int Movie::CHILDRENS;
const int Movie::REGULAR;
const int Movie::NEW_RELEASE;


Movie::Movie( const std::string& title, Price* priceCode )
        : _title( title )
        , _priceCode( priceCode )
{}

Price* Movie::getPriceCode() const { return _priceCode; }

void Movie::setPriceCode( Price* price) {  }

std::string Movie::getTitle() const { return _title; }

int Movie::addFrequentRenterPoints(int dayRented){
    return _priceCode->FrequentRenterPointsByType(dayRented);
}

double Movie::calculateAmount(int dayRented){
    return _priceCode->priceByType(dayRented);
}