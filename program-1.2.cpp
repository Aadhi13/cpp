#include <iostream>

using namespace std;

class Stack {
    int arr[5];
    int top;

    public:
        Stack() {
            top = -1;
        }

        void push() {
            int val;
            cout << "Enter the value: ";
            cin >> val;

            if(top == 4) {
                cout << "Stack is full." << endl;
                return;
            }

            arr[++top] = val;
            cout << val << " is added to stack." << endl;
        }

        void pop() {
            if (top == -1) {
                cout << "Stack is empty." << endl;
                return;
            }

            cout << arr[top--] << " is removed from stack." << endl;
        }
};

int main() {

    Stack stk;
    stk.pop();
    stk.push();
    stk.push();
    stk.push();
    stk.push();
    stk.push();
    stk.push();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    return 0;
}