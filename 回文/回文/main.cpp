//
//  main.cpp
//  回文
//
//  Created by 我是五高你敢信 on 2018/7/3.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>

//寻找并输出11~999之间的数m，它满足m、m2和m3均为回文数。
//11**2=121，11**3=1331。 python的**次方
using namespace std;

//判断是否回文
bool issymm(unsigned n) {
    unsigned i = n;
    unsigned m = 0;
    
    while (i > 0) {
        m = m * 10 + i % 10;;
        i /= 10;
    }
    return m == n;
}

int main(int argc, const char * argv[]) {
    
    for (unsigned i=11; i<1000; i++) {
        if (issymm(i) && issymm(i*i) && issymm(i*i*i)) {
            cout << "m = " << i << ",m * m = " << i * i << ", m * m * m = " << i * i * i << endl;
        }
    }
    
    return 0;
}
