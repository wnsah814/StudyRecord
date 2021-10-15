// stack.h -- class def fot stack ADT(abstract data type)
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack {
    private:
    enum {MAX = 10};
    Item items[MAX];
    int top;

    public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns true if stack is full
    bool push(const Item & item);
    // pop() returns false if stack is empty
    bool pop(Item & item);
};

#endif