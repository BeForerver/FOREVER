/*************************************************************************
	> File Name: Ep37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 13时22分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define max_n 1000000
#include<math.h>

int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};

void init(){
    for(int i = 2; i < max_n; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > max_n) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    //printf("%d\n", num[397]);
}

int main(){
    init();
    int ans = 0;
    for(int i = 11; i <= max_n; i++){
        if(!num[i]) continue;
        //printf("%d\n",i);
        int temp = i;
        while(temp){
            if(!num[temp]) break;
                temp /= 10;
        }
        //printf("%d\n", i);
        if(temp == 0){
            int n = floor(log10(i)) + 1;
            //int k = pow(10, n - 1);
            int m = i;
            while(n){
                int k = pow(10, n - 1);
                m %= k;
                if(!num[m]) break;
                n--;
            }
            if(n == 1){
            ans += i;
            printf("%d\n", i);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
