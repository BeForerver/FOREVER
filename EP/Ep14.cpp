/*************************************************************************
	> File Name: Ep14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 20时06分48秒
 ************************************************************************/
#include<stdio.h>
#include<inttypes.h>
#define max 1000000

#define keep_range 1000000

int keep[keep_range+5]={0};

int get_length(int64_t x){
    if(x==1)return 1;
    if(x<=keep_range&&keep[x])return keep[x];
    int temp=0;
    if(x&1)temp=get_length(3*x+1)+1;
    else temp=get_length(x>>1)+1;
    if(x<=keep_range)keep[x]=temp;
    return temp;
}

int main(){
    int ans,ans_length=1;
    for(int i=1;i<max;i++){
        int temp=get_length(i);
        if(temp>ans_length){
            ans=i;
            ans_length=temp;
        }
    }
    printf("%d(%d)\n",ans,ans_length);
    return 0;
}
