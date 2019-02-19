/*************************************************************************
	> File Name: Ep40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 16时56分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 1000000

int num[max_n + 5] = {0};

void init(){
    int cnt = 10;
    for(int i = 1; i < 9; i++){
        num[i] = i;
    }
    for(int j = 10 ; j <= max_n / 2; j++){
        int temp = j;
        int n = floor(log10(temp)) + 1;
        for(int i = n; i >= 1; i--){
            int k = pow(10, i - 1);
            num[cnt] = temp / k;
            cnt++;
            temp %= k;
        } 
        if(cnt > max_n)break;
    }
        printf("%d ", num[1]);
        printf("%d ", num[10]);
        printf("%d ", num[100]);
        printf("%d ", num[1000]);
        printf("%d ", num[10000]);
        printf("%d ", num[100000]);
        printf("%d ", num[1000000]);
}

int main(){
    init();
    printf("\n%d\n", num[1] * num[10] * num[100] * num[1000] * num[10000] * num[100000] * num[1000000]);
    return 0;
}
