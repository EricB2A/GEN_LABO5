

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../../sources/Movie.h"

class MockingMovie : public Movie {
public:
    MockingMovie(const std::string& title, Price* priceCode = PriceRegular::getInstance()) : Movie(title, priceCode) {} ;

    MOCK_METHOD1(calculateAmount, double(int dayRented));
    MOCK_METHOD1(addFrequentRenterPoints, double(int dayRented));
};
