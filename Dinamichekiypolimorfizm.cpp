#include <cmath>
#include <iostream>

using namespace std;

class Shape {

protected:
    double area;

public:

    virtual double GetArea() = 0;

    virtual ~Shape() {
        cout << "Shape destructor" << endl;
    }
};

class Triangle : public Shape {

private:
    double a;
    double b;
    double c;

    void CalcArea() {
        double p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
    }

public:

    Triangle(double _a, double _b, double _c) :
        a(_a), b(_b), c(_c) {
        CalcArea();
    }

    double GetArea() {
        return area;
    }

    ~Triangle() {
        cout << "Triangle destructor" << endl;
    }
};

class Circle : public Shape {

private:
    double r;

    void CalcArea() {
        area = 3.14 * r * r;
    }

public:
    Circle(double _r) :
        r(_r) {
        CalcArea();
    }

    double GetArea() {
        return area;
    }

    ~Circle() {
        cout << "Circle destructor" << endl;
    }
};

int main() {

    Shape* arr[3];

    arr[0] = new Triangle(3, 4, 5);
    cout << arr[0]->GetArea() << endl;

    arr[1] = new Circle(10.5);
    cout << arr[1]->GetArea() << endl;

    arr[2] = new Triangle(3, 5, 7.5);
    cout << arr[2]->GetArea() << endl;

    for (int i = 0; i < 3; ++i)
        delete arr[i];

    return 0;
}