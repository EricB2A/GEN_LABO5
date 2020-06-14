#include <sstream>
#include "Rental.h"

using std::ostringstream;

Rental::Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

int Rental::getDaysRented() const { return _daysRented; }

const Movie& Rental::getMovie() const { return _movie; }

double Rental::calculateAmount(){
    double amount = 0;

    switch ( getMovie().getPriceCode() ) {
        case Movie::REGULAR:
            amount+= 2;
            if ( getDaysRented() > 2 )
                amount += ( getDaysRented() - 2 ) * 1.5 ;
            break;
        case Movie::NEW_RELEASE:
            amount += getDaysRented() * 3;
            break;
        case Movie::CHILDRENS:
            amount += 1.5;
            if ( getDaysRented() > 3 )
                amount += ( getDaysRented() - 3 ) * 1.5;
            break;
    }

    return amount;
}

int Rental::addFrequentRenterPoints(){
    int frequentRenterPoints = 1;

    // add bonus for a two day new release rental
    if ( ( getMovie().getPriceCode() == Movie::NEW_RELEASE ) && getDaysRented() > 1 ){
        frequentRenterPoints++;
    }

    return frequentRenterPoints;
}


std::string Rental::statement() {
    std::ostringstream result;
    result << "\t" << getMovie().getTitle() << "\t" << calculateAmount() << "\n";

    return result.str();
}