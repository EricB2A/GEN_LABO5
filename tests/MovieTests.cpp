#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../sources/Customer.h"
#include "../sources/prices/PriceNewRelease.h"
#include "../sources/prices/PriceChildren.h"
#include "mock/MockingMovie.cpp"
#include "mock/MockingRental.cpp"

TEST(MovieTests, testTitle)
{
    const std::string TITLE = "The Room";
    MockingMovie mockingMovie(TITLE);
    ASSERT_EQ(TITLE, mockingMovie.getTitle());
}

TEST(MovieTests, testRegularPrice)
{
    const std::string TITLE = "Troll 2";
    MockingMovie mockingMovie(TITLE);
    ASSERT_EQ(6.5, mockingMovie.getPriceCode()->priceByType(5));
    ASSERT_EQ(2, mockingMovie.getPriceCode()->priceByType(2));
}

TEST(MovieTests, testChildrenPrice)
{
    const std::string TITLE = "Dünyayı Kurtaran Adam";
    MockingMovie mockingMovie(TITLE, PriceChildren::getInstance());
    ASSERT_EQ(12, mockingMovie.getPriceCode()->priceByType(10));
    ASSERT_EQ(1.5, mockingMovie.getPriceCode()->priceByType(3));
}

TEST(MovieTests, testNewReleasePrice)
{
    const std::string TITLE = "Plan 9 from Outer Space";
    MockingMovie mockingMovie(TITLE, PriceNewRelease::getInstance());
    ASSERT_EQ(3, mockingMovie.getPriceCode()->priceByType(1));
    ASSERT_EQ(15, mockingMovie.getPriceCode()->priceByType(5));
}



