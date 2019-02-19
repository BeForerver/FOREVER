/*************************************************************************
	> File Name: Ep46.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 20时56分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 1000000

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
int ans[max_n + 5] = {0};
void init2(){
    for(int i = 3; i < max_n; i++){
        if(i % 2 == 0 || num[i]) continue;
        ans[i] = 1;
    }
}

int main(){
    init();
    init2();
    for(int i = 1; i <= prime[0]; i++){
        for(int j = 0; j <= max_n; j++){
            if(prime[i] + 2 * j * j > max_n) break;
            ans[prime[i] + 2 * j * j] = 0;
            //printf("%d\n", prime[i] + 2 * j * j);
        }
    }
    for(int i = 3; i < max_n; i++){
        if(ans[i]){
            printf("%d\n", i);
            break;
        }
    }
    printf("%d\n", num[593]);
    return 0;
}
