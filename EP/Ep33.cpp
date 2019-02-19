/*************************************************************************
	> File Name: Ep33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 17时43分20秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define max_n 100

int num[max_n + 5][max_n + 5] = {0};

void init(){
    for(int i = 11; i < max_n; i++){
        if(i % 10 == 0) continue;
        for(int j = i + 1; j < max_n; j++){
            if(j % 10 == 0) continue;
            else if(i / 10 == j / 10 || i % 10 == j % 10 || 
               i % 10 == j / 10 || i / 10 == j % 10){
                   if((i/10) * j == i * (j/10) || (i%10) * j == i * (j%10)||
                      (i%10) * j == i * (j/10) || (i/10) * j == i * (j%10)){
                          num[i][j] = 1;
                      }
               }
        }
    }
}

int main(){
    init();
    int n = 0, m = 0;
    for(int i = 11; i < max_n; i++){
        for(int j = i + 1; j < max_n; j++){
            if(num[i][j]){
                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}
