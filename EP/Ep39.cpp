/*************************************************************************
	> File Name: Ep39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 16时12分34秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int num[1005] = {0};

int tran(int a, int b, int c){
    if(a * a + b * b == c * c) return 1;
    return 0;
}

int main(){
    int ans = 0;
    for(int i = 120; i <= 1000; i++){
        int cnt = 0;
        int temp = i;
        for(int j = 1; j * 2 < i; j++){
            for(int k = j; k * 2 < i; k++){
                for(int l = k + 1; l * 2 < i; l++){
                    if(j + k + l != i) continue;
                    if(!tran(j, k, l)) continue;
                    else cnt++;
                }
            }
        }
        num[i] = cnt;
        if(cnt > 3)printf("%d %d\n", i, num[i]);
    }
   /* for(int i = 120; i <= 1005; i++){
        if(num[i] > num[i + 1]) ans = i;
        else continue;
    }
    printf("%d %d\n", ans, num[ans]);*/

    return 0;
}
