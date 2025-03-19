#include <iostream>

using namespace std;

class Shape {
    public:
        virtual void calArea() = 0;
        virtual void calPeri() = 0;
};

class Square: public Shape {
    float side;
    public:
        void getValues(){
            cout << "Enter the side of the square: ";
            cin >> side;
        }

        void calArea(){
            cout << "Area of square is: " << (side * side) << endl;
        }

        void calPeri(){
            cout << "Peri of square is: " << (4 * side) << endl;
        }
};

class Rectangle: public Shape {
    float width, length;
    public:
        void getValues(){
            cout << "Enter the widht of rectangle: ";
            cin >> width;
            cout << "Enter the length of rectangle: ";
            cin >> length;
        }

        void calArea(){
            cout << "Area of rectangle is: " << (width * length) << endl;
        }

        void calPeri(){
            cout << "Peri of rectangle is: " << (2 * (width + length)) << endl;
        }
};

class Triangle: public Shape {
    float a, b, c, height;
    public:
        void getValues(){
            cout << "Enter the A sides of triangle: ";
            cin >> a;
            cout << "Enter the B sides of triangle: ";
            cin >> b;
            cout << "Enter the C sides of triangle: ";
            cin >> c;
            cout << "\nEnter the height of the trainagle: ";
            cin >> height;
        }

        void calArea(){
            cout << "Area of the triangle is: " << (0.5 * b * height) << endl;
        }

        void calPeri(){
            cout << "Peri of the triangle is: " << (a + b + c) << endl;
        }
};

int main (){
    Square sq;
    Rectangle rect;
    Triangle tri;

    sq.getValues();
    rect.getValues();
    tri.getValues();

    sq.calArea();
    sq.calPeri();

    rect.calArea();
    rect.calPeri();

    tri.calArea();
    tri.calPeri();
    
    return 0;
}