#include <iostream>
#include <ctime>
int main() {
    using namespace std;
    cout << "Enter time delay in sec: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Start counting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "End.\a\n";
    return 0;
}