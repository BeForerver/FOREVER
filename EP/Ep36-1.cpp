/*************************************************************************
	> File Name: Ep36-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 20时39分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

#include <inttypes.h>

 

#define MAX_N 1000000

 

int32_t reverseNum(int32_t n, int32_t base) {

    if (base <= 1) return 0;

    int32_t x = 0;

    while (n) {

        x = x * base + n % base;

        n /= base;

    }

    return x;

}

 

int32_t main() {

    int32_t sum = 0, base2, base10;

    for (int32_t i = 1; i <= MAX_N; i++) {

        base2 = reverseNum(i, 2);

        base10 = reverseNum(i, 10);

        if (base2 == base10 && base10 == i) {
            sum += i;
            cout << i << endl;
        }

    }

    printf("%d\n", sum);

    return 0;

}
