#include <iostream>
int main() {
    using namespace std;
    int n;

    cout << "Guess the num bet 1 and 10! \n";

    do {
        cin >> n;
    } while (n != 7);
    cout << "Correct! My favorite num is lucky 7!!";

    return 0;
}