#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../sources/Customer.h"
#include "../sources/prices/PriceNewRelease.h"
#include "../sources/prices/PriceChildren.h"

TEST(MovieTests, testTitle)
{
    const std::string TITLE = "The Room";
    Movie movie(TITLE);
    ASSERT_EQ(TITLE, movie.getTitle());
}

TEST(MovieTests, testRegularPrice)
{
    const std::string TITLE = "Troll 2";
    Movie movie(TITLE);
    ASSERT_EQ(6.5, movie.getPriceCode()->priceByType(5));
    ASSERT_EQ(2, movie.getPriceCode()->priceByType(2));
}

TEST(MovieTests, testChildrenPrice)
{
    const std::string TITLE = "Dünyayı Kurtaran Adam";
    Movie movie(TITLE, PriceChildren::getInstance());
    ASSERT_EQ(12, movie.getPriceCode()->priceByType(10));
    ASSERT_EQ(1.5, movie.getPriceCode()->priceByType(3));
}

TEST(MovieTests, testNewReleasePrice)
{
    const std::string TITLE = "Plan 9 from Outer Space";
    Movie movie(TITLE, PriceNewRelease::getInstance());
    ASSERT_EQ(3, movie.getPriceCode()->priceByType(1));
    ASSERT_EQ(15, movie.getPriceCode()->priceByType(5));
}