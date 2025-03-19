#include <iostream>

using namespace std;

class Shape {
    public:
        virtual void calculateArea() = 0;
        virtual void calculatePeri() = 0;
};

class Square: public Shape{
    float side;
    public:
        void getDetails(){
            cout << "Enter square side: ";
            cin >> side;
        }

        void calculateArea(){
            cout << "Square Area: " << (side * side) << endl;
        }
        
        void calculatePeri(){
            cout << "Square Peri: " << (4 * side) << endl;
        }
};

class Rectangle: public Shape{
    float length, width;
    public:
        void getDetails(){
            cout << "Enter length & width: ";
            cin >> length >> width;
        }

        void calculateArea(){
            cout << "Rectangle Area: " << (length * width) << endl;
        }

        void calculatePeri(){
            cout << "Rectangle Peri: " << (2 * (length + width)) << endl;
        }
};


class Triangle: public Shape{
    float a, b, c, height;
    public:
        void getDetails(){
            cout << "Enter 3 sides of triangle: ";
            cin >> a >> b >> c;
            cout << "\nEnter the height of the triangle: ";
            cin >> height;
        }

        void calculateArea(){
            cout << "Area of Triangle: " << (0.5 * b * height) << endl;
        }

        void calculatePeri(){
            cout << "Peri of Triangle: " << (a+b+c) << endl;
        }
};

int main (){
    Square sq;
    Rectangle rect;
    Triangle tri;
    
    sq.getDetails();
    rect.getDetails();
    tri.getDetails();


    Shape* shape;

    cout << "\n------Square--------" << endl;
    shape = &sq;
    shape->calculateArea();
    shape->calculatePeri();

    cout << "\n------Rectangle--------" << endl;
    shape = &rect;
    shape->calculateArea();
    shape->calculatePeri();


    cout << "\n-------Triangle---------" << endl;
    shape = &tri;
    shape->calculateArea();
    shape->calculatePeri();

    return 0;
}





