#include <iostream>
int main() {
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "address of rats = " << &rats;
    cout << ", address of rodents = " << &rodents << endl;
    return 0;
}