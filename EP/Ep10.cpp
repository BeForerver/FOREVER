/*************************************************************************
	> File Name: Ep10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 11时19分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<inttypes.h>
#define max 2000000
int p[max+5]={0};
void prime(){
    for(int i=2;i*i<=max;i++){
        if(p[i])continue;
        for(int j=i*i;j<=max;j+=i){
            p[j]=1; 
    
        }
    }
    for(int i=2;i<max;i++){
        if(p[i])continue;
        p[++p[0]]=i;
    }
    return;
}
int main(){
    prime();
    int64_t ans=0;
    for(int i=1;i<=p[0];i++){
        ans+=p[i];
    }
    printf("%"PRId64,ans);
    return 0;
}
