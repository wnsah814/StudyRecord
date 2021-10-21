#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    int large = a;
    if (b > large) large = b;
    if (c > large) large = c;
    return large;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max3(a, b, c) << endl;
    return 0; 
}