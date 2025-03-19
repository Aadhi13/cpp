#include <iostream>

using namespace std; 

class B;

class A {
    private:
        int x;
        float y;
    public:
        void getData(){
            cout << "Enter int & float values for class A: ";
            cin >> x >> y;
        }

        friend void showValues(A, B);
};

class B{
    private:
        int p;
        float q;
    public: 
        void getData(){
            cout << "Enter int & float valus for class B: ";
            cin >> p >> q;
        }

        friend void showValues(A, B);
};

void showValues(A a, B b) {
    cout << "Values ";
    cout << "class A " << a.x << " " << a.y << endl;
    cout << "class B " << b.p << " " << b.q << endl;

    cout << "Adding";
    cout << "int " << a.x + b.p;
    cout << "float " << a.y + b.q;
}

int main (){
    A obja;
    B objb;

    obja.getData();
    objb.getData();

    showValues(obja, objb);
     
    return 0;
}