#include <iostream>

using namespace std;

class B;

class A {
    private:
        int x;
        float y;
    public:
        void getData(){
            cout << "Enter int & float values";
            cin >> x >> y;
        }

        friend void showValues(A, B);
};

class B {
    private:
        int p;
        float q;
    public:
        void getData(){
            cout << "Enter int & float values";
            cin >> p >> q;
        }

        friend void showValues(A, B);
};


void showValues(A a, B b) {
    cout << "Class A: " << a.x << " " << a.y << endl;
    cout << "Class B: " << b.p << " " << b.q << endl;
}


int main (){
    A obja;
    B objb;

    obja.getData();
    objb.getData();

    showValues(obja, objb);

    return 0;
}