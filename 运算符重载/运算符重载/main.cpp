//
//  main.cpp
//  运算符重载
//
//  Created by 我是五高你敢信 on 2018/7/25.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;
    
public:
    Complex(double r = 0, double i = 0): real(r), imag(i) {}
    
    //加法
    Complex operator + (const Complex &c2) {
        Complex c = Complex(real + c2.real, imag + c2.imag);
        return c;
    }
    
    Complex operator + (double r) {
        Complex c = Complex(real + r, imag);
        return c;
    }
    
    //减法
    Complex operator - (const Complex &c2) {
        Complex c = Complex(this->real - c2.real, this->imag - c2.imag);
        return c;
    }
    
    Complex operator - (double r) {
        Complex c = Complex(real - r, imag);
        return c;
    }
    
    void display() {
        if (real != 0) {
            cout << real << "+" << imag << "i" << endl;
        }else {
            cout << imag << "i" << endl;
        }
        
    }
};

int main(int argc, const char * argv[]) {

    Complex a = Complex(2, 5);
    
    Complex c = Complex(3, 6);
    
    Complex b = a + c;
    b.display();
    
    b = b - 5;
    
    b.display();
    
    return 0;
}
