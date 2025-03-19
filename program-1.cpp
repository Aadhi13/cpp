#include <iostream>

using namespace std;

class Stack {
    private:
        int top;
        int arr[5];

    public: 
        Stack () {
            top = -1;
        }

        void push() {
            int val;
            cout << "Enter a value to push: " << endl;
            cin >> val;
            while (top == 5) {
                cout << "Stack is full cannot add anymore." << endl;
                return;
            }
            arr[++top] = val;
            cout << val << "Pushed into stack successfully"<< endl;
        }

        void pop() {
            while(top == -1) {
                cout << "Stack is empty, please add something first." << endl;
                return;
            }
            cout << arr[top--] << " is removed from stack succussfully." << endl;


        }
};

int main () {
    Stack stk;
    
    stk.push();
    stk.push();
    stk.pop();
    stk.pop();
    stk.pop();
    
    return 0;
}