#ifndef COMPLEXNUMBERHEADERDEF
#define COMPLEXNUMBERHEADERDEF
#include <iostream>

class Complex
{
private:
    /* data */
    double x;
    double y;
public:
    Complex(void ){
        x=0.0;
        y=0.0;
    };
    Complex(double a,double b){
        x=a;
        y=b;
    }
    ~Complex();
};

Complex::Complex(/* args */)
{
}

Complex::~Complex()
{
}

#endif // !