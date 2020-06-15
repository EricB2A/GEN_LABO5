// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "prices/price.h"

class Movie {
public:
    static const int CHILDRENS   = 2;
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;

    Movie( const std::string& title, Price* priceCode = new Price() );

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