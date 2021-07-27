#include <iostream>
int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; # to end: \n";
    cin >> ch;
    while (ch != '#') {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << endl;

    return 0;
}