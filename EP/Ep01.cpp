/*************************************************************************
	> File Name: Ep01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 18时20分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#define max_n 1000

int num[max_n + 5] = {0};

void init(){
    for(int i = 1; i < max_n; i++){
        if(num[i]) continue;
        if(i % 3 == 0) {
            num[i] = 1;
            num[0] += i;
        }
        else if(i % 5 == 0){
            num[i] = 1;
            num[0] += i;
        }
    }
}

int main(){
    init();
    printf("%d\n", num[0]);
    return 0;
}
