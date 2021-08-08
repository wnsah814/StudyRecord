#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main() {
    using namespace std;
    char mmm[15] = "minimum";
    char *wail = (char*)"ululate";
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << "There are " << ms << " m in " << mmm << endl;
    cout << "There are " << us << " u in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char * str, char ch) {
    int count = 0;

    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}