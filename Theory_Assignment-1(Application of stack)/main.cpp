#include <iostream>
#include "StackType.cpp"

using namespace std;
int main() {
    StackType<char> stack;
    string parentheses;
    char top;
    bool b=true;
    cout << "Enter string: ";
    getline(cin, parentheses);
    for(int i = 0; i < parentheses.length(); i++) { // loop for every character of that string

        if(parentheses[i] == '(') { //check every character of that string and if we found "(" then we will push it to stack
            stack.Push(parentheses[i]);// push function called to push the parentheses.
            continue;
        }
        if(parentheses[i] == ')') { //check every character of that string and if we found ")" then we will push it to stack
            if(stack.IsEmpty()) // we will see if the stack is empty or not and if it is empty then the boolean variable b is set to false which means not balanced.
                b= false;
            else{               // if the stack is not empty then we will pop the "(" from the stack top position.
                top = stack.Top();
                stack.Pop(); // pop out the value of the stack
            }

        }

    }

    if(stack.IsEmpty()&&b==true) { // in decision making, we will see whether the boolean is true also the stack is empty or not.
            cout << "Balanced\n";   // since stack is empty and boolean variable holds true so the stack is balanced
        }
        else {              // otherwise the string is not balanced.
            cout << "Not Balanced\n";
        }
    return 0;
}
