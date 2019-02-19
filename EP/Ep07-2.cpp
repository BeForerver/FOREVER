/*************************************************************************
	> File Name: Ep07-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 14时15分57秒
 ************************************************************************/

#include<iostream>
using namespace std;


#include<stdio.h>
#define max 10000

int prime[max+5]={0};
void init(){
    for(int i=2;i*i<=max;i++){
        if(prime[i])continue;
        for(int j=i;j<=max;j+=i){
            if(prime[j])continue;
            prime[j]=i;
        }
    }
    return;
}
int main(){
    init();
    int x;
    while(~scanf("%d",&x)){
        printf("%d(%d)\n",x,prime[x]);
    }
    return 0;
}
