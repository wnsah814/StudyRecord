#include <iostream>
#include <string>

using namespace std;

struct person {
    string first;
    string last;
    char grade;
    int age;
};

int main() {
    person a;

    cout << "first: ";
    getline(cin, a.first);
    cout << "last: ";
    getline(cin, a.last);
    cout << "grade: ";
    cin >> a.grade;
    a.grade += 1;
    cout << "age: ";
    cin >> a.age;

    cout << "name: " << a.last << ", " << a.first << endl;
    cout << "grade: " << a.grade << endl;
    cout << "age: " << a.age;
    return 0;
}