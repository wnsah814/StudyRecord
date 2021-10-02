// usestok1.cpp -- Using Stock Class
// compile with stock10.cpp

#include "stock10.h"
#include <iostream>

int main() {
    using std::cout;
    cout << "Make objective using constructor.\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Boffo Objectives", 2, 2.0);
    stock2.show();

    cout << "Put stock1 to stock2\n";
    stock2 = stock1;
    cout << "print stock1 and stock2\n";
    stock1.show();
    stock2.show();

    cout << "update objective by using constructor\n";
    stock1 = Stock("Hifty Foods", 10, 50.0);
    cout << "generated objective stock1:\n";
    stock1.show();
    cout << "End.\n";
    return 0;
}