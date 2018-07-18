//
//  main.cpp
//  矩阵转置
//
//  Created by 我是五高你敢信 on 2018/7/18.
//  Copyright © 2018年 我是五高你敢信. All rights reserved.
//

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main(int argc, const char * argv[]) {
    
    int a[3][3];
    cout << "输入九个数组成3*3矩阵" << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "初始矩阵: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<i; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    
    cout << "转置后矩阵: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
