/*************************************************************************
	> File Name: Ep28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 19时10分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include<stdio.h>
#include<inttypes.h>
#define max_n 1001


int main(){
    int64_t ans = 0;
    for(int i = 3; i <= max_n; i += 2){
        int j = i * i - i + 1;
        int m = j - i + 1, n = m - i + 1;
        ans += (i * i + j + m + n);
    }
    printf("%" PRId64, ans + 1);
    return 0;
}
