//
//  main.cpp
//  排列组合Cnk
//
//  Created by 我是五高你敢信 on 2018/7/4.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>

using namespace std;

//用递归法计算从n个人中选选k个人组成一个委员会的不同组合数
//由n个人里选k个人的组合数= 由n-1个人里选k个人的组合数+由n-1个人里选k-1个人的组合数；

//当n = k或k = 0时，组合数为1。

int Cnk(int n, int k) {
    if (k > n)
        return 0;
    else if (n == k || k == 0)
        return 1;
    else {
        return Cnk(n-1, k) + Cnk(n-1, k-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int n, k;
    cout << "输入两个数字n， k 计算C n k的值" << endl;
    cin >> n >> k;
    cout << "C(n, k) = " << Cnk(n, k) << endl;
    
    return 0;
}
