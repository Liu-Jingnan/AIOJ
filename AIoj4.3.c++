#include <iostream>
using namespace std;

// 定义Shape基类
class Shape {
    public:
    void GetArea();
};

// 定义Rectangle类，继承自Shape类
class Rectangle : public Shape {
    public:
    Rectangle( int a , int b)
    {
        lon = a;
        shor = b;
    };
    double GetArea()
    {
        return lon * shor ;
    };
    private:
    double lon , shor;
};

// 定义Circle类，继承自Shape类
class Circle : public Shape {
    public:
    Circle( int r )
    {
        R = r;
    }
    double GetArea()
    {
        return 3.14 * R * R ;
    }
    private:
    int R;
};

int main() {
    Rectangle rect(5, 3);
    Circle circle(2);

    cout <<  rect.GetArea() << endl;
    cout <<  circle.GetArea() << endl;

    return 0;
}