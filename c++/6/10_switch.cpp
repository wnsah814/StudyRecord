#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main() {
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5) {
        switch (choice) {
            case 1: cout << "\a\n";
                        break;
            case 2: report();
                        break;
            case 3: cout << "Boss in Company";
                        break;
            case 4: comfort();
                        break;
            default: cout << "You cannot choice that!\n";
        }
        showmenu();
        cin >> choice;
    }

    cout << "End.";
    return 0;
}

void showmenu() {
    cout << "Choose from 1, 2, 3, 4 and 5.\n";
            "1: Alert   2: report\n"
            "3: Al..    4: comfort\n"
            "5: End";
}

void report() {
    cout << "Good\n";
}

void comfort() {
    cout << "U R good.\n";
}