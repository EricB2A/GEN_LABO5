// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "prices/PriceRegular.h"

class Movie {
public:
    Movie( const std::string& title, Price* priceCode = PriceRegular::getInstance() );

    Price* getPriceCode() const;
    void setPriceCode( Price* price );
    std::string getTitle() const;
    int addFrequentRenterPoints(int dayRented);
    double calculateAmount(int dayRented);

private:
    std::string _title;
    Price* _priceCode;
};


#endif // MOVIE_H