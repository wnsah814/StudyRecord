// usestock2.cpp -- using Stock class
// compile with stock20.cpp

#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main() {
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Oblisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "List of Stocks:\n";
    int st;
    for (st = 0; st < STKS; st++) {
        stocks[st].show();
    }
    
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++) {
        top = &top->topval(stocks[st]);
    }

    std::cout << "\nThe most valuable stock:\n";
    top->show();    
    return 0;
}