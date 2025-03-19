#include <iostream>

using namespace std;

class DigitSum{
    int num;

    public:
        DigitSum(){
            cout << "Enter a number: ";
            cin >> num;
        }

        void singleDigit(){
            while(num > 9) {
                int sum = 0;
                while(num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                num = sum;
            }
            cout << "The single digit is: " << num << endl;
            return;
        }

};

int main (){
    DigitSum ds;
    ds.singleDigit();
    return 0;
}