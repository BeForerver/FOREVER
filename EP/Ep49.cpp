/*************************************************************************
	> File Name: Ep49.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 18时27分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define max_n 9999
int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};

void init(){
    for(int i = 2; i < max_n; i++){
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

int check(int a, int b, int c){
    int n[10] = {0};
    int m[10] = {0};
    int k[10] = {0};
        for(int i = 1; i <= 4; i ++){
            //if(n[a % 10]) return 0;
            n[a % 10] = 1;
            a /= 10;
        }
        for(int i = 1; i <= 4; i++){
            //if(m[b % 10] || k[c % 10]) return 0;
            if(n[b % 10] && n[c % 10]){
                m[b % 10] = 1;
                k[c % 10] = 1;
                b /= 10;
                c /= 10;
            }
            else{
                return 0;
            }
        }
        //if(a < 10 && b < 10 && c < 10) break;
    return 1;
}

int main(){
    init();
    for(int i = 1000; i < max_n; i++){
        for(int j = 1; j <= 4000; j++){
            if(i + j > max_n || i + j * 2 > max_n)break;
           // IF(check(i, i + j, i + j * 2) == 0)break;
            else if(num[i] && num[i + j] && num[i + 2 * j] && check(i, i + j, i + j * 2)) {
                printf("%d %d %d\n", i, i + j, i + j * 2);
            }
        }
    }
    
    printf("%d %d\n", check(1487, 4817, 8147),check(1234,1423,2331));
    return 0;
}
