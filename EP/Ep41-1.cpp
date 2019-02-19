/*************************************************************************
	> File Name: Ep41-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 18时14分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int is_prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int get_num(int n){
    int num[8] = {0,1,2,3,4,5,6,7};
    for(int i = 1;i <= 7; i++){
        if(n % 10 > 7) return 0;
        else if(n % 10 == 0) return 0;
        else if(num[n % 10] == 0) return 0;
        num[n % 10] = 0;
        n /= 10;
    }
    return 1;
}

int main(){
    for(int i = 1000000; i < 9999999; i++){
        if(get_num(i)){
            //printf("%d\n", i);
            if(is_prime(i)){
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
