/*************************************************************************
	> File Name: Ep48.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 20时23分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<inttypes.h>
#define max_n 10000000000

int64_t num(){
    int64_t ans = 0;
    int64_t cnt = 1;
    for(int i = 1; i < 1000; i++){
        for(int j = 1; j <= i; j++){
            cnt *= i;
            cnt %= max_n;
        }
        ans += cnt;
        ans %= max_n;
        printf("%" PRId64"\n", ans);
        cnt = 1;
    }
    return ans;
}

int main(){
    printf("%" PRId64 "\n", num());
    return 0;
}
