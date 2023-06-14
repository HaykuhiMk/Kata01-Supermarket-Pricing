#include <iostream>
#include <string>
#include <vector>
#include "cart.h"
#include "saleType.h"
#include "product.h"

void Product::setName(const std::string& name) 
{
    mName = name;
}

void Product::setPrice(double price) 
{
    mPrice = price;
}

void Product::setSale(SaleType& sale) 
{
    mSale = sale;
}

std::string Product::getName() const 
{
    return mName;
}

double Product::getPrice() const 
{
    return mPrice;
}

SaleType Product::getSale() const 
{
    return mSale;
}

double Product::getCleanPrice(Cart& cart) const
{
    switch (this->mSale) 
    {
        case TWO_FOR_ONE:
            if (cart.countOfProduct(this) == 2)
            {
                return this->getPrice() / 2;
            }
            else
            {
                break;
            }
        case THREE_FOR_ONE:
            if (cart.countOfProduct(this) == 3)
            {
                return this->getPrice() / 3;
            }
            else
            {
                break;
            }
        case KILO_TO_GRAM:
        {
            int gram = cart.countOfProduct(this);
            int tmp = this->getPrice() / 1000 * gram;
            return tmp;
        }
        case TWENTY_PERCENT_FOUR:
            if (cart.countOfProduct(this) == 4)
            {
                int tmp = this->getPrice() - (this->getPrice() * 20 / 100);
                return tmp;
            }
            else
            {
                break;
            }
        default:
        {
            std::cout << "Unknown sale type";
            return 0;
        } 
    }
}
