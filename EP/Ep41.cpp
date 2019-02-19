/*************************************************************************
	> File Name: Ep41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 17时20分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 9999999


int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};

void init(){
    for(int i = 2; i < max_n; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n)break;
            prime[prime[j] * i] = 1;
            if(i % prime[j])break;
        }
    }
}

int check(int n){
    int m[10] = {0,1,2,3,4,5,6,7,8,9};
    int k = floor(log10(n)) + 1;
    for(int i = 1; i <= k; i++){
        if(n % 10 > k || n % 10 == 0) return 0;
        if(m[n % 10] == 0) return 0;
        m[n % 10] = 0;
        n /= 10;
    }
    return 1;
}


int main(){
    init();
    printf("%d\n", check(2143));
    for(int i = 1000; i < max_n; i++){
        if(!num[i])break;
        else if(check(i)){
           printf("%d", i);
        }
    }

    return 0;
}
