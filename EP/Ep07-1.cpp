/*************************************************************************
	> File Name: Ep07-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 10时41分04秒
 *************************************************************************/
#include<stdio.h>
#define Max_n 200000

int prime[Max_n+5]={0};

void init(){
    for(int i=2;i*i<=Max_n;i++){
        if(!prime[i])
            for(int j=i*i;j<=Max_n;j+=i){
                prime[j]=1;
            }
    }
    for(int i=2;i<=Max_n;i++){
        if(prime[i])continue;
        prime[++prime[0]]=i;
    }
    return ;
}

int main(){
    init();
    printf("%d",prime[10001]);
    return 0;
}
