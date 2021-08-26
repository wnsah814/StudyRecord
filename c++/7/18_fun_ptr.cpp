#include <iostream>
double gildong(int);
double moonsoo(int);
void estimate(int lines, double (*pf)(int));

int main() {
    using namespace std;
    int code;

    cout << "Please enter the number of lines of code required: ";
    cin >> code;
    cout << "HONG Gildong's time estimation\n";
    estimate(code, gildong);
    cout << "PARK Moonsoo's time estimation\n";
    estimate(code, moonsoo);
    return 0;
}

double gildong(int lns) {
    return 0.05 * lns;
}

double moonsoo(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
    using namespace std;
    cout << "To write " << lines << "lines, ";
    cout << (*pf)(lines) << " times takes.\n";
}