// usenmsp.cpp
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);
int main(void) {
    using debts::Debt;
    using debts::showDebt;
    Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
    showDebt(golf);
    other();
    another();

    std::cin.get();std::cin.get();std::cin.get();
    std::cin.get();
    return 0;
}

void other(void) {
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doogles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++) {
        getDebt(zippy[i]);
    }
    cout << "Total: $" << sumDebts(zippy, 3) << endl;
    return;
}

void another(void) {
    using pers::Person;
    Person collector = { "Milo", "Rightshift" };
    pers::showPerson(collector);
    std::cout << std::endl;

}