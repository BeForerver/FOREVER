/*************************************************************************
	> File Name: Ep34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 20时28分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include<stdio.h>

#define Max_n 2540160

int is_valid(int x){
    int sum=0,i=1,j,temp=x;
    while(x){
        if(x%10==0||x%10==1)i=1;
        for(j=x%10;j>0;j--){
            i*=j;
        }
        sum+=i;
        i=1;
        x/=10;
    }
    return temp==sum;
}

int main(){
    int sum=0;
    for(int i=3;i<Max_n;i++){
        if(!is_valid(i))continue;
        printf("%d\n",i);
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}
