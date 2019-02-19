/*************************************************************************
	> File Name: Ep60.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 20时10分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 1000
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

int get_num(int *ans){
    for(int i = 0; i < 4; i++){
        int n = floor(log10(ans[i])) + 1;
        for(int j = i + 1; j < 5; j++){
            int m = floor(log10(ans[j])) + 1;
            int k1 = ans[i] * pow(10, m) + ans[j];
            int k2 = ans[i] + ans[j] * pow(10, n);
            printf("%d\n", ans[4]);
            if(k1 > max_n || k2 > max_n) return 0;
            if(!num[k1] || !num[k2]) return 0;
        }
    }
    return 1;
}

int main(){
    init();
    for(int i = 1; i <= prime[0]; i++){
        int ans[5] = {0};
        ans[0] = prime[i];
        for(int j = i + 1; j <= prime[0]; j++){
            ans[1] = prime[j];
            for(int k = j + 1; k <= prime[0]; k++){
                ans[2] = prime[j];
                for(int n = k + 1; n <= prime[0]; n++){
                    ans[3] = prime[n];
                    for(int m = n + 1; m <= prime[0]; m++){
                        ans[4] = prime[m];
                        //printf("%d\n", ans[4]);
                        if(get_num(ans)){
                            printf("                  %d", ans[0] + ans[1] + ans[2] + ans[3] + ans[4]);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
