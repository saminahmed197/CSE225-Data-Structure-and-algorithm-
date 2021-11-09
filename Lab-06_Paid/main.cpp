#include <iostream>
#include "StackType.cpp"

using namespace std;

template <class ItemType>
void printstack(StackType<ItemType> stack) {

    ItemType elements[MAX_ITEMS];
    int index = 0;
    while(!stack.IsEmpty()) {
        elements[index++] = stack.Top();
        stack.Pop();
    }
    while(index > 0) {
        cout << elements[index-1] << " ";
        index--;
    }
    cout << "\n";
}

bool isBalanced(string paren) {

    StackType<char> st;
    char at_top;
    for(int i = 0; i < paren.length(); i++) {

        if(paren[i] == '(') {

            st.Push(paren[i]);
            continue;
        }
        if(paren[i] == ')') {
            if(st.IsEmpty())
                return false;

            at_top = st.Top();
            st.Pop();
        }

    }

    return st.IsEmpty();
}

int main() {
    StackType<int> stack;

    if(stack.IsEmpty()) {
        cout << "Stack is Empty\n";
    }
    else {
        cout << "Stack is not Empty\n";
    }

    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);

    if(stack.IsEmpty()) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Stack is not empty\n";
    }

    if(stack.IsFull()) {
        cout << "Stack is full\n";
    }
    else {
        cout << "Stack is not full\n";
    }

    printstack(stack);

    stack.Push(3);

    printstack(stack);

    if(stack.IsFull()) {
        cout << "Stack is full\n";
    }
    else {
        cout << "Stack is not full\n";
    }

    stack.Pop();
    stack.Pop();
    cout << stack.Top() << "\n";


    int n = 4;
    string paren;
    while(n--) {
        cout << "Enter string of parentheses: ";
        getline(cin, paren);
        if(isBalanced(paren)) {
            cout << "Balanced\n";
        }
        else {
            cout << "Not Balanced\n";
        }
    }
    return 0;
}
