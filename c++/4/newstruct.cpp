#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "enter name: ";
    cin.get(ps->name, 20);
    cout << "enter volume: ";
    cin >> (*ps).volume;
    cout << "enter price: ";
    cin >> ps->price;
    cout << "name: " << (*ps).name << endl;
    cout << "volume: " << ps->volume << "cubic feet\n";
    cout << "price: " << ps->price << endl;

    return 0;
}