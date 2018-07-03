//
//  main.cpp
//  计算pi
//
//  Created by 我是五高你敢信 on 2018/7/3.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>

using namespace std;

//实现arctan函数
double arctan(double x) {
    double sqr = x * x;
    double e = x;
    double r = 0;
    int i = 1;
    while (e/i > 1e-15) {
        double f = e / i;
        r = (i % 4 == 1) ? (r + f) : (r - f);
        e *= sqr;
        i += 2;
    }
    return r;
}

int main(int argc, const char * argv[]) {
    
    
    double pi = 16 * arctan(1 / 5.0) - 4 * arctan(1 / 239.0);
    
    cout << "pi = " << pi << endl;
    
    return 0;
}


