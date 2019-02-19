/*************************************************************************
	> File Name: Ep12-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 14时40分29秒
 ************************************************************************/

#include <stdio.h>
#define max 100000


int prime[max + 5] = {0};
int dnum[max + 5] = {0};
int mnum[max + 5] = {0};

void init(){
    for(int i = 2; i <= max; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            dnum[i] = 2;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0){
                mnum[prime[j] * i] = mnum[i] + 1;
                dnum[prime[j] * i] = dnum[i] / (mnum[i] + 1) * (mnum[i] + 2);
                break;
            } else{
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
            }
        }
    }
}

int fac_num(int n){
    if(n & 1) {
        return dnum[n] * dnum[(n + 1) >> 1];
    } else return dnum[n >> 1] * dnum[n + 1];
}

int main(){
    init();
    int n = 1;
    while(fac_num(n) < 500) n++;
    printf("%d\n", n * (n + 1) / 2);
    return 0;
}
