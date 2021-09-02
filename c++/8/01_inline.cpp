#include <iostream>

inline double square(double x) { return x * x; }

int main() { 
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.7 + 7.5);
    cout << "a = " << a << " b = " << b << endl;
    cout << "c = " << c;
    cout << ", square of c = " << square(c++) << endl;
    cout << "Current c = " << c << endl;
    return 0;
}