#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../sources/Customer.h"
#include "mock/MockingMovie.cpp"
#include "mock/MockingRental.cpp"

TEST(RentalTests, calculateAmount)
{
    const std::string TITLE = "Samurai Cop";
    MockingMovie mockingMovie(TITLE);
    MockingRental mockingRental(mockingMovie, 3);

    EXPECT_CALL(mockingRental, calculateAmount()).WillRepeatedly(::testing::Return(3.5));
}



