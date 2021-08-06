#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main() {
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter a file name: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Cannot open " << filename;
        cout << "\nExiting...\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    /*
    inFile >> value;
    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }
    */
    while(inFile >> value) {
        ++count;
        sum += value;
    }
    
    if (inFile.eof()) {
        cout << "EOF\n";
    } else if (inFile.fail()) {
        cout << "Data incorrect\n";
    } else {
        cout << "Unknown Error\n";
    }

    if (count == 0) {
        cout << "No data\n";
    } else {
        cout << "Read Data(s): " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}