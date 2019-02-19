/*************************************************************************
	> File Name: Ep50.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 09时16分39秒
 ************************************************************************/

#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};
int cn[max_n + 5] = {0};

void init(){
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}

int main(){
    init();
    //int ans = 0, cnt = 0;
    for(int i = 1; i <= 1000; i++){
        int ans = 0, cnt = 0;
        for(int j = i; j <= 1000; j++){
        ans += prime[j];
        if(ans > max_n) break;
        cnt++;
        if(num[ans] && cnt > cn[ans]){
            cn[ans] = cnt;
        }else continue;
    }
    }
    int n = 0, m = 0;
    for(int i = 1; i < max_n; i++){
        if(!num[i]) continue;
        else if(cn[i] > n){
            n = cn[i];
            m = i;
        }
    }
    printf("%d %d\n", prime[0], num[996005]);
    printf("%d %d\n", m, n);
    return 0;
}
