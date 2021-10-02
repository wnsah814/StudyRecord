// stock10.cpp
#include "stock10.h"
#include <iostream>

// default constructor
Stock::Stock() {
    std::cout << "Called default constructor\n";
    company = "no_name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
    std::cout << "A constructor using " << co << " is called.\n";
    company = co;

    if (n < 0) {
        std::cout << "sharee is greater than 0, " << company
                  << " shares have to set 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

// Class destructor
Stock::~Stock() { std::cout << "GoodBye, " << company << "!\n"; }

// Other methods
void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "price cannot be negative, transaction cancled.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout << "price cannot be negative, transaction cancled.\n";
    } else if (num > shares) {
        cout << "cannot sell greater than you have, transaction cancled\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    using std::cout;
    using std::ios_base;
    // Set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company Name: " << company << ", Shares: " << shares << '\n';
    cout << "Share value: $" << share_val;
    // set format to #.##
    cout.precision(2);
    cout << "Total value: $" << total_val << "\n";

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}