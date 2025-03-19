#include <iostream>

using namespace std;

int x = 10;

class Val {
    int x = 20;

    public: 
        Val(){
            cout << "x in Val: " << x << endl;
        }

        void xInMemFunc() {
            int x = 30;
            cout << "x in xInMemFunc: " << x << endl;
        }

        void disp(){
            cout << "x in global: " << ::x << endl;
        }
};

int main (){
    x = 40;

    Val vl;
    vl.disp();
    vl.xInMemFunc();

    cout << "x in main: " << x << endl;
    return 0;
}