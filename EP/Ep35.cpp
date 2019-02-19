/*************************************************************************
	> File Name: Ep35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月11日 星期五 17时33分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};
void init(){
    for(int i =2; i <= max_n; i++){
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
    //printf("%d\n", prime[10]);
}


int is_valid(int n){
    int m = floor(log10(n)) + 1;
    int k = pow(10, m - 1);
    for(int i = 1; i <= m; i++){
        if(num[n]){
            if( n % k < (k / 10)) return 0;
            n = 10 * (n % k) + n / k;
        }else return 0;   
    }
    return 1;
}
int main(){
    init();
    int ans = 4;
    for(int i = 11; i < max_n; i++){
        if(num[i] && is_valid(i)) ans++;
        else continue;
    }
    printf("%d\n", ans);

    return 0;
}
