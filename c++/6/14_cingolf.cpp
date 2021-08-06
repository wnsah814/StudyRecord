#include <iostream>
const int Max = 5;
int main() {
    using namespace std;
    int golf[Max];
    cout << "Enter a score\n";
    cout << "Up to " << Max << endl;
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i+1 << ": ";
        while(!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Enter a score: ";
        } 
    }

    double total = 0.0;
    for (i = 0; i < Max; i++) {
        total += golf[i];
    }

    cout << "The average of " << i << "  rounds is " << total / i;
    return 0;
}