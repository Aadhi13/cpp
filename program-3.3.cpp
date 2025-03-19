#include <iostream>

using namespace std;

class DigitSum{
    int num;

    public:
        DigitSum(){
            cout << "Number: ";
            cin >> num;
        }

        inline void singleDigtNumber(){
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

            cout << "num: " <<  num << endl;
            return;
            
        }
};

int main (){
    DigitSum ds;
    ds.singleDigtNumber();
    return 0;
}