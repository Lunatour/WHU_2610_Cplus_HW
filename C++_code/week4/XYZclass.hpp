#ifndef XYZCLASS_HPP   //什么意思？
#define XYZCLASS_HPP   //一个声明（猜测）

#include <iostream>

class X; 
class Y; 
class Z;

int h(X* px);  //px是指针吗？

class Y{
    public:
        int g(X* px);

};

class X{
    private:
        int i;
    
    public:
        explicit X(int v = 0): i(v) {}  //什么意思？

        friend int Y::g(X* px);
        friend class Z;
        friend int h(X* px);

        int getI() const { return i; }  ////什么意思？
};

class Z{
    public:
        int f(X* px);

};

int Y::g(X* px) {
    px->i += 1;
    return px->i;
}

int Z::f(X* px) {
    px->i += 5;
    return px->i;
}

int h(X* px) {
    px->i += 10;
    return px->i;
}

#endif   //什么意思？