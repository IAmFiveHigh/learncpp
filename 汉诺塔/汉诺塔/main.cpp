//
//  main.cpp
//  汉诺塔
//
//  Created by 我是五高你敢信 on 2018/7/4.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//有三根针A、B、C。A针上有N个盘子，大的在下，小的在上，要求把这N个盘子从A针移到C针，在移动过程中可以借助B针，每次只允许移动一个盘，且在移动过程中在三根针上都保持大盘在下，小盘在上。

static int num = 0;

void move(string src, string desc) {
    cout << src << " --> " << desc << endl;
}

void hanoi(int n, string src, string medium, string desc) {
    num += 1;
    if (n == 1)
        move(src, desc);
    else{
        hanoi(n-1, src, desc, medium);
        move(src, desc);
        hanoi(n-1, medium, src, desc);
    }
}

int main(int argc, const char * argv[]) {
    
    cout << "输入盘子个数: " << endl;
    int n;
    cin >> n;
    
    hanoi(n, "A", "B", "C");
    cout << "调用次数 = " << num << endl;
    return 0;
}
