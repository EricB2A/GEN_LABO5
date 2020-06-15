
#ifndef PRICE_H
#define PRICE_H

class Price{
public:

    virtual int frequentRenterPointsByType(int daysRented) = 0;
    virtual double priceByType(int dayRented) = 0;

};

#endif //PRICE_H
