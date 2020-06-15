#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../sources/Customer.h"
#include "../sources/prices/PriceNewRelease.h"
#include "../sources/prices/PriceChildren.h"

TEST(MovieTests, basics)
{
    const std::string TITLE = "The Room";
    /*
    MockingMovie mocking(TITLE);
    EXPECT_CALL(mocking, calculateAmount(::testing::_)).WillRepeatedly(testing::Return(21.5));

     */

    Movie movie(TITLE);
    ASSERT_EQ(TITLE, movie.getTitle());
    ASSERT_EQ(6.5, movie.getPriceCode()->priceByType(5));
    ASSERT_EQ(2, movie.getPriceCode()->priceByType(2));
}

TEST(MovieTests, regularPrice)
{

}