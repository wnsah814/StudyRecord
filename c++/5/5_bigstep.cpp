#include <iostream>
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Enter a int: ";
    int by;
    cin >> by;
    cout << "renewal size: " << by << "s\n";
    for (int i = 0; i < 100; i += by)
        cout << i << endl;

    return 0;
}