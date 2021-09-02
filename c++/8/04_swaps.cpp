#include <iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main() {
    using namespace std;
    int wallet1 = 3000;
    int wallet2 = 2000;

    cout << "W1 = $" << wallet1;
    cout << ", W2 = $" << wallet2 << endl;

    cout << "swap with reference:\n";
    swapr(wallet1, wallet2);
    cout << "W1 = $" << wallet1;
    cout << ", W2 = $" << wallet2 << endl;

    cout << "reswap with pointer:\n";
    swapp(&wallet1, &wallet2);
    cout << "W1 = $" << wallet1;
    cout << ", W2 = $" << wallet2 << endl;

    cout << "Try to swap with value:\n";
    swapv(wallet2, wallet2);
    cout << "W1 = $" << wallet1;
    cout << ", W2 = $" << wallet2 << endl;
    return 0;    
}

void swapr(int & a, int & b) {
    int temp;
    temp = a;
    a = b;


    
    b = temp;
}

void swapp(int * p, int * q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}