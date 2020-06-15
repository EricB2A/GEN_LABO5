#include <iostream>

#include "Customer.h"
#include "prices/PriceNewRelease.h"
#include "prices/PriceChildren.h"
#include "gtest/gtest.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", PriceNewRelease::getInstance()), 5));
    customer.addRental( Rental( Movie("Snow White", PriceChildren::getInstance()), 3 ));

    std::cout << customer.statement() << std::endl;

    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();

}