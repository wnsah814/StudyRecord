#include <iostream>
int main() {
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "value of nights = ";
    cout << nights << ": memory location = " << &nights << endl;
    cout << "int type";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double *pd = new double;
    *pd = 10000001.0;

    cout << "double type";
    cout << "value = " << *pd << ": loc = " << pd << endl;
    cout << "loc of ptr pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
}