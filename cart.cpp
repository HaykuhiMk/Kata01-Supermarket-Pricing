#include <iostream>
#include "saleType.h"
#include "cart.h"

void Cart::setTotalPrice(double tPrice)
{
    mTotalPrice = tPrice;
}

double Cart::getTotalPrice() const
{
    return mTotalPrice;
}

void Cart::addProduct(Product* pr)
{
    mTotalPrice += pr->getPrice();
    mProducts.push_back(pr);
}

const std::vector<Product*>& Cart::getProducts() const
{
    return mProducts;
}

int Cart::countOfProduct(const Product* pr)
{
    int count = 0;
    for (const auto& prs : mProducts)
    {
        if (prs->getName() == pr->getName())
        {
            ++count;
        }
    }
    return count;
}

void Cart::print()
{
    for (const auto& product : this->getProducts()) 
    {
        double cleanPrice = product->getCleanPrice(*this);
        std::cout << "Product: " << product->getName() << ", Clean Price: " << cleanPrice << std::endl;
    }
}