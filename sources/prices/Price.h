
#ifndef PRICE_H
#define PRICE_H

class Price{
public:
    virtual int frequentRenterPointsByType(int daysRented) const = 0;
    virtual double priceByType(int dayRented) const = 0;

};

#endif //PRICE_H
