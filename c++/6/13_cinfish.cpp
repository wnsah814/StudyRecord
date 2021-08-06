#include <iostream>
const int Max = 5;
int main() {
    using namespace std;
    double fish[Max];
    cout << "Enter a weight of fish.\n";
    cout << "Today, you can fish up to " << Max << endl;
    cout << "<q to end>\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if(++i < Max) {
            cout << "fish #" << i+1 << ": ";
        }
    }
    double total = 0.0;
    for(int j = 0; j < i; j++) {
        total += fish[j];
    }

    if(i == 0) {
        cout << "No fish today....\n";
    } else {
        cout << "The average wight of " << i << " fish is " << total / i << endl;
    }

    return 0;
}