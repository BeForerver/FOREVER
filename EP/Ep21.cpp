/*************************************************************************
	> File Name: Ep21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月02日 星期三 18时11分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#define max_n 10000

int num[max_n + 5] = {0};
void init(){
    int cnt = 0;
    for(int i = 3; i <= max_n; i++){
        for(int j = 1; 2 * j <= i; j++){
            if(i % j == 0){
                cnt += j;
            }else continue;
        }
        num[i] = cnt;
        if(num[i] > max_n) num[i] = 0;
        cnt = 0;
    }
    printf("%d\n", num[220]);
    printf("%d\n", num[284]);
    printf("%d\n", num[9000]);
}

int main(){
    init();
    int ans = 0;
    for(int i = 3; i <= max_n; i++){
        if(num[i] == 0) continue;
        if(i == num[num[i]] && i != num[i]){
            ans += (i + num[i]);
            printf("%d %d\n", i, num[i]);
            num[num[i]] = 0;
            num[i] = 0;
        }    
    }
    printf("%d\n", ans);
    return 0;
}
