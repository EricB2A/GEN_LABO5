

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../../sources/Rental.h"

class MockingRental : public Rental{
public:
    MockingRental(Movie& movie, int daysRented) : Rental(movie, daysRented) {} ;

    MOCK_CONST_METHOD0(calculateAmount, double());
    MOCK_CONST_METHOD0(addFrequentRenterPoints, int());
};
