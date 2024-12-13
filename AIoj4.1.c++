#include <iostream>                               
using namespace std;

// 定义基类Base
class Base {
public:
    void fn1() {
        cout << "fn1() is called." << endl;
    }
    void fn2() {
        cout << "fn2() is called." << endl;
    }
};

// 私有派生出Derived类
class Derived : private Base 
{
    public:
    void fn()
    {
        fn1();
    };
};

int main()
{
    Derived d;
    // 通过Derived类中定义的新公有函数来调用基类的fn1()
    d.fn();
    return 0;
}

