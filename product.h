#ifndef PRODUCT_H
#define PRODUCT_H
class Cart;
#include <string>
#include <vector>
#include "cart.h"
#include "saleType.h"

class Product
{
public:
    Product(const std::string& name, double price, const SaleType& sale) : 
    mName(name), 
    mPrice(price), 
    mSale(sale) 
    {}
    void setName(const std::string&);
    void setPrice(double);
    void setSale(SaleType&);
    std::string getName() const;
    double getPrice() const;
    SaleType getSale() const;
    double getCleanPrice(Cart&) const;

private:
    std::string mName;
    double mPrice;
    SaleType mSale;
};

#endif  //PRODUCT_H
