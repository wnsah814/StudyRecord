#include <iostream>

class Foo {
public:
    Foo() {std::cout<<"A";}
    Foo(int i) {std::cout<<"M";}
    Foo(char c) {std::cout<<"L";}
};

class Bar {
private:
    Foo f;
    Foo o;
public:
    Bar() : f(), o(0xa) {std::cout << "O";}
    Bar(int i) : f('H'), o(0xf) { std::cout<< "N";}
    Bar(char c) : f('L'), o() {std::cout << c << "G";}
};

int main() {
    Bar b;
    Bar* p = new Bar('N');
    p = new Bar(b);

    delete p;
    return 0;
}