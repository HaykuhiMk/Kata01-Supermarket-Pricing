#include <iostream>
#include "saleType.h"
#include "product.h"
#include "cart.h"

int main() {
    Cart cart;
    cart.setTotalPrice(0.0);
    Product p1("Product 1", 10.0, SaleType::TWO_FOR_ONE);
    Product p2("Product 2", 15.0, SaleType::THREE_FOR_ONE);
    Product p3("Product 3", 5.0, SaleType::KILO_TO_GRAM);
    Product p4("Product 4", 20.0, SaleType::TWENTY_PERCENT_FOUR);
    cart.addProduct(&p1);
    cart.addProduct(&p1);
    cart.addProduct(&p2);
    cart.addProduct(&p2);
    cart.addProduct(&p2);
    cart.addProduct(&p3);
    cart.addProduct(&p4);
    cart.addProduct(&p4);
    cart.addProduct(&p4);
    cart.addProduct(&p4);
    cart.print();
    double totalPrice = cart.getTotalPrice();
    std::cout << "Total Price: " << totalPrice << std::endl;
    return 0;
}
