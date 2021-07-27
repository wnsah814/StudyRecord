#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char last[20];
    char first[20];
    char full[40];

    cin.getline(last, 20);
    cin >> first;
    strcat(full, first);
    strcat(full, ", ");
    strcat(full, last);

    cout << full;
    return 0;
}