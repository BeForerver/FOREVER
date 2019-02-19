/*************************************************************************
	> File Name: Ep23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月02日 星期三 20时12分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#define max_n 28123

int num[max_n + 5] = {0};
int pnum[max_n + 5] = {0};
void init(){
    int cnt = 0; 
    for(int i = 12; i <= max_n; i++){
        for(int j = 1; 2 * j <= i; j++){
            if(i % j == 0){
                cnt += j;
            }else continue;
        }
        if(cnt <= i) num[i] = 0;
        else {
            num[i] = 1;
          
        }
        cnt = 0;
    }
    //printf("%d\n",num[24]);
}

int main(){
    init();
    int ans = 0;
    for(int i = 1; i <= max_n; i++){
        for(int j = 1; j <= max_n; j++){
            if(i + j > max_n || !num[i] || !num[j]) continue;
            pnum[i + j] = 1;
        }
    }
    for(int i = 1; i <= max_n; i++){
        if(!pnum[i]){
            ans += i;
            //printf("%d ", i);
        }else continue;
    }
    printf("\n%d\n",ans);

    return 0;
}
