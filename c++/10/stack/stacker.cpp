// stacker.cpp -- Test Stack Class
#include <iostream>
#include <cctype>
#include "stack.h"
int main() {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Enter A to add an order, P to process the order, and Q to exit\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if(!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch){
            case 'A':
            case 'a': cout << "Please enter the number of the order you want to add\n";
                      cin >> po;
                      if (st.isfull()) {
                          cout << "The stack is full\n";
                      } else {
                          st.push(po);
                      }
                      break;
            case 'P':
            case 'p': if (st.isempty()) {
                          cout << "The stack is empty\n";
                      } else {
                          st.pop(po);
                          cout << "Processed the order #" << po << endl;
                      }
                      break;

        }
        cout << "Enter A to add an order, P to process the order, and Q to exit\n";
    }
    cout << "End of the program.\n";
}