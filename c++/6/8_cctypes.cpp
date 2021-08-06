#include <iostream>
#include <cctype>
int main() {
    using namespace std;
    cout << "Enter a text ends with @\n";

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch)) 
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << "Alphabets: " << chars << ", " << "whitespaces: " << whitespace << ", " << "digits: " << digits << ", " << "puncts: " << punct << ", " << "others: " << others << endl;

    return 0;
}