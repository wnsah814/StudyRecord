#include <iostream>
int main() {
    using namespace std;
    int a, b;
    cout << "Enter two ints: ";
    cin >> a >> b;
    cout << "The big one is ";
    int c = a > b ? a : b;
    cout << c;

    return 0;
}