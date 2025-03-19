#include <iostream>

using namespace std;

class DigitSum{
    int num;

    public:
        DigitSum(){
            cout << "Enter a num: ";
        cin >> num;
        }

        void getSingleDigit(){
            while (num > 9)
            {
                int sum = 0;
                while (num > 0)
                {
                    sum += num % 10;
                    num /= 10;
                }
                
                num = sum;
            }

            cout << "Single digit: " << num << endl;
            
        }
};

int main (){
    DigitSum ds;
    ds.getSingleDigit();
    return 0;
}