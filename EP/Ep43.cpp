/*************************************************************************
	> File Name: Ep43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 18时39分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<inttypes.h>

int get_num(int64_t n){
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i <= 9; i++){
        if(num[n % 10] == -1) return 0;
        else{
            num[n % 10] = -1;
            n /= 10;
        }
    }
    return 1;
}

int digit(int64_t n){
    while(n > 10){
        if((n % 1000) % 17 != 0) return 0;
        else{
            n /= 10;
            if((n % 1000) % 13 != 0) return 0;
            else{
                n /= 10;
                if((n % 1000) % 11 != 0) return 0;
                else{
                    n /= 10;
                    if((n % 1000) % 7 != 0) return 0;
                    else{
                        n /= 10;
                        if((n % 1000) % 5 != 0) return 0;
                        else{
                            n /= 10;
                            if((n % 1000) % 3 != 0) return 0;
                            else{
                                n /= 10;
                                if((n % 1000) % 2 != 0) return 0;
                                else return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}


int main(){
    int64_t ans = 0;
    printf("%d %d\n", get_num(1234567890), get_num(2416908753));
    for(int64_t i = 1000000000; i <= 9876543210; i++){
        if(i == 9876543210) break;
        if(get_num(i)){
            //printf("%" PRId64 "\n", i);
            if(digit(i)){
                printf("%" PRId64"\n", i);
                ans += i;
                printf("ans =""%" PRId64 "\n", ans);
            }
        }else continue;
    }
    printf("%" PRId64 "\n", ans);
    return 0;
}
