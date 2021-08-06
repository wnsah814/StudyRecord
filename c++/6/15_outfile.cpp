#include <iostream>
#include <fstream>
int main() {
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "Enter a maker and name: ";
    cin.getline(automobile, 50);
    cout << "enter a year: ";
    cin >> year;
    cout << "a_price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;


    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "maker and name: " << automobile << endl;
    cout << "year: " << year << endl;
    cout << "a_price: " << a_price << endl;
    cout << "current price: " << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "maker and name: " << automobile << endl;
    outFile << "year: " << year << endl;
    outFile << "a_price: " << a_price << endl;
    outFile << "current price: " << d_price << endl;

    outFile.close();
    return 0;
}