

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../sources/Customer.h"
#include "../sources/prices/PriceNewRelease.h"
#include "../sources/prices/PriceChildren.h"

TEST(customer, statement)
{
    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", PriceNewRelease::getInstance()), 5));
    customer.addRental( Rental( Movie("Snow White", PriceChildren::getInstance()), 3 ));

    EXPECT_EQ(customer.statement(), "Rental Record for Olivier\n"
                                    "\tKarate Kid\t9.5\n"
                                    "\tAvengers: Endgame\t15\n"
                                    "\tSnow White\t1.5\n"
                                    "Amount owed is 26\n"
                                    "You earned 4 frequent renter points");
}

