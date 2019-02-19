/*************************************************************************
	> File Name: Ep02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 18时26分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#define max_n 4000000

int fab[max_n + 5] = {0};

void init(){
    fab[1] = 1;
    fab[2] = 2;
    fab[0] = 2;
    for(int i = 3; i <= max_n; i++){
        fab[i] = fab[i - 1] + fab[i - 2];
        if(fab[i] > max_n) break;
        fab[0]++;
    }
}

int main(){
    init();
    int ans = 0;
    for(int i = 1; i <= fab[0]; i++){
        if(fab[i] % 2 == 0){
            ans += fab[i];
        }
        printf("%d ", fab[i]);
    }
    printf("\n%d\n", ans);
    return 0;
}
