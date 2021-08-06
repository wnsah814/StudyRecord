#include <iostream>
const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main() {
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0) {
        cout << "Enter ratio: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Wrong Value. Enter ratio: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Program End.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Price of #" << (i+1) << ": $";
        cin >> temp;
        if(!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Wrong Value. End the input process\n";
            break;
        } else if (temp < 0) {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n) {
    using namespace std;
    for (int i = 0; i < n; i++) {
        cout << "#" << (i+1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; i++) {
        ar[i] *= r;
    }
}