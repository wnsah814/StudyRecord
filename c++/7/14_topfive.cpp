#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main() {
    string list[SIZE];
    cout << "Enter your " << SIZE << "favorite night sky view:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i+1 <<": ";
        getline(cin, list[i]);
    }

    cout << "Your input is as follows:\n";
    display(list, SIZE);

    return 0;
}

void display(const string sa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}