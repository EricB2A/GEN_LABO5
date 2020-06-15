#include <sstream>
#include "Rental.h"

using std::ostringstream;

Rental::Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

int Rental::getDaysRented() const { return _daysRented; }

const Movie& Rental::getMovie() const { return _movie; }

double Rental::calculateAmount(){



    return _movie.calculateAmount(_daysRented);
}

int Rental::addFrequentRenterPoints(){
    return _movie.addFrequentRenterPoints(_daysRented);
}


std::string Rental::statement() {
    std::ostringstream result;
    result << "\t" << getMovie().getTitle() << "\t" << calculateAmount() << "\n";

    return result.str();
}