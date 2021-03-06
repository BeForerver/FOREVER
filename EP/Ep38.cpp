/*************************************************************************
	> File Name: Ep38.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月21日 星期五 20时45分58秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int is_valid(int x){
    int num[10] = {0};
    int n = 0, digit = 0;
    do{
        n += 1;
        int y = x * n;
        while(y){
            if(y % 10 == 0) return 0;
            if(num[y % 10]) return 0;
            num[y %10] = 1;
            y /= 10;
            digit += 1;
        }
    }while(digit < 9);
    int ret = 0;
    if(digit > 9) return 0;
    for(int i = 1; i <= n; i++){
        int y = x * i;
        ret = ret * pow(10, floor(log10(y)) + 1) + y;
    }
    return ret;
}

int main(){
    int ans = 0;
    for(int i = 2; i <= 9999; i++){
        int temp = is_valid(i);
        if(temp > ans) ans = temp;
    }
    printf("%d\n", ans);
    return 0;
}
