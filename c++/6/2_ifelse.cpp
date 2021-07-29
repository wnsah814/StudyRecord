#include <iostream>
int main() {
    char ch;
    using std::cin;
    using std::cout;

    cin.get(ch);
    while (ch != '.') {
        if (ch == '\n') {
            cout << ch;
        } else {
            // cout << ++ch;
            cout << ch + 1;  
        }
        cin.get(ch);
    }

    cout << "Sorry.";

    return 0; 
}