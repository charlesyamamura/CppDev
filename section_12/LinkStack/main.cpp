#include <iostream>
#include "LinkStack.h"
using namespace std;

void printStack(LinkStack& stack);

int main() {
    LinkStack stack;

    stack.push(100);
    stack.push(150);
    stack.push(222);
    stack.push(71);
    stack.push(53);
    stack.push(125);

    printStack(stack);
    cout << "To verify it is intact." << endl;

    cout << "Top of stack is: " << stack.peek() << endl;

    while (!stack.isEmpty()) {
        cout << stack.pop() << endl;
    }
    return 0;
}

void printStack(LinkStack& stack) {
	LinkStack temp;
	int data;

	while (!stack.isEmpty()) {
		data = stack.pop();
		cout << data << endl;
		temp.push(data);
	}

	while (!temp.isEmpty()) {
		stack.push(temp.pop());
	}

}

