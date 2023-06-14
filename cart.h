#ifndef CART_H
#define CART_H
class Product; 
#include <vector>
#include "saleType.h"
#include "product.h"

class Cart
{
public:
    void setTotalPrice(double);
    double getTotalPrice() const;
    void addProduct(Product*);
    const std::vector<Product*>& getProducts() const;
    int countOfProduct(const Product*);
    void print();

private:
    double mTotalPrice;
    std::vector<Product*> mProducts;
};

#endif  //CART_H