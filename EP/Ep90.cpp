/*************************************************************************
	> File Name: Ep58.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 20时16分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000
int prime[max_n + 5] = {0};


void init(){
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j]) break;
        }

    }
}
int is_valid(int n){
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num[max_n + 5] = {0};
    int cnt = 2;
    int n = 0;
    int ans;
    for(int i = 0; i < max_n; i += 4){
        num[i] = (2 * i - 1) * (2 * i - 1);
        num[i + 1] = num[i] - cnt;
        num[i + 2] = num[i] - 2 * cnt;
        num[i + 3] = num[i] - 3 * cnt;
        cnt++;
    }
    for(int i = 0; i < max_n; i++){
        if(is_valid(num[i])) {
            n++;
            if((4 * cnt + 1) / n > 10) break;
        }
    }
    ans = 2 *cnt - 1;
    cout << ans << endl;
    
    return 0;
}
