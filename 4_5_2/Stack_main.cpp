#include "Stack.h"
#include <string.h>
#include <iostream>

static void verify_nesting(const char expression[])
{
    int l = strlen(expression);

    Stack<char> s{8};

    for (int i = 0; i < l; ++i) {
        if (expression[i] == '(') {
            if (s.is_full()) {
                std::cout << "Stack too small!\n";
                return;
            }
            else {
                s.push('(');
            }
        }
        else if (expression[i] == ')') {
            if (s.is_empty()) {
                std::cout << "Not correctly opened!\n";
                return;
            }
            else {
                s.pop();
            }
        }
    }

    // correct: no error occurred + stack empty
    if (s.is_empty()) {
        std::cout << "Correct!\n";
    }
    else {
        std::cout << "Not correctly closed: ";
        s.print();
        std::cout << "\n";
    }
}

int main()
{
    verify_nesting("((2+3)*5)");
    verify_nesting("((2+3)*5)*2)");
    verify_nesting("((2+3)*5");
    return 0;
}
