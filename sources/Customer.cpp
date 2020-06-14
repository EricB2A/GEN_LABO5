// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

using namespace std;



string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    ostringstream result;

    result << "Rental Record for " << getName() << "\n";

    for ( auto each : _rentals ) {
        totalAmount += each.calculateAmount();
        frequentRenterPoints += each.addFrequentRenterPoints();
        result << each.statement();
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n";
    result << "You earned " << frequentRenterPoints
           << " frequent renter points";
    return result.str();
}