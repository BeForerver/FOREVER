/*************************************************************************
	> File Name: rand.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 09时38分47秒
 ************************************************************************/

#include <stdio.h>
#define max_n 20000

int prime[max_n] = {0};


int get_num(int b){
    if(prime[b] < 10000) return 0;
    if(prime[b] || prime[b - 1]) return 0;
    else return prime[b];
}

static int my_seed = 37, a_num, b_num;
void my_srand(int x){
    my_seed = x;
}

int my_rand(int x){
    #define i my_seed
    do{
        i * 3 % x;
    }while(i >= 10000);
    return i + 1;
    #undef i
}

int quick_mod(int a, int b, int c){
    int ans = 1, temp = a % c;
    while(b){
        if(b & 1) ans *= temp;
        temp *= temp;
        temp %= c;
        ans %= c;
        b >>1;
    }
    return ans;
}
int get_len(int a, int b){
    for(int i = 1; i < b -1; i++){
        if((b - 1) % i) continue;
        if(quick_mod(a, i, b) == 1) return i;
    }
    return b;
}

int main(){
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    printf("%d\n",prime[1512]);    
    return 0;
}
