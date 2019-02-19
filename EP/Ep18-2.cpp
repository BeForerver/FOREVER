/*************************************************************************
	> File Name: Ep18-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 20时15分07秒
 ************************************************************************/

#include <stdio.h>
#define max 15
#define Max(a, b)  ((a) > (b) ? (a) : (b));

int keep[max + 5][max + 5] = {0};

int main(){
    for(int i = 0; i < max; i++){
        for(int j = 0; j <= i; j++){
            scanf("%d", keep[i] + j);
        }
    }
    for(int i = 13; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            keep[i][j] += Max(keep[i + 1][j], keep[i + 1][j + 1]);
        }
    }
    printf("%d\n", keep[0][0]);
    return 0;
}
