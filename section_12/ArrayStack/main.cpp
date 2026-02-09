#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main() {
    ArrayStack stack;
    ArrayStack revStack;

    for (int i = 0; i < 17; i++) {
        stack.push(i);
    }

    while (!stack.isEmpty()) {
        revStack.push(stack.pop());
    }

    // while (!stack.isEmpty()) {
    //     cout << stack.pop() << endl;
    // }

//     for (int i = 17; i >= 0; i--) {
//         revStack.push(i);
// }

    while (!revStack.isEmpty()) {
        cout << revStack.pop() << endl;
    }

    return 0;
}
