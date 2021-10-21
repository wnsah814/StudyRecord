#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int max(vector<int>& v, int n) {
    int large = v[0];
    for (int i = 1; i <= n; i++) {
        if (v[i] > large) {
            large = v[i];
        }
    }
    return large;
}

int main() {
    int n;
    cin >> n;
    
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << max(v, n) << endl;
    return 0;
}