#include <iostream>
using namespace std;

class Arithmatic {
    private:
        int num1;
        float num2;
    public:
        void getNums() {
            cout << "Enter the int value: ";
            cin >> num1;
            cout << "\nEnter the float value: ";
            cin  >> num2;
        }

        void add() {
            float result;
            result = num1 + num2;
            cout << "Added value: " << result << endl;
            return;
        } 
        void sub() {
            float result;
            result = num1 - num2;
            cout << "Subbed value: " << result << endl;
            return;
        } 
        void mul() {
            float result;
            result = num1 * num2;
            cout << "Mulled value: " << result << endl;
            return;
        } 
        void div() {
            float result;
            if(num2 == 0) {
                cout << "Cannot divided by zero..." << endl;
                return;
            }
            result = num1 / num2;
            cout << "Divved value: " << result << endl;
            return;
        } 
        
};
int main (){
    Arithmatic arith;
    arith.getNums();
    arith.add();
    arith.sub();
    arith.div();
    arith.mul();

    return 0;
}