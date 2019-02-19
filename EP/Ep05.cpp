/*************************************************************************
	> File Name: Ep05.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 09时07分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int gcd(int a,int b){
    return(b?gcd(b,a%b):a);
}


int main(){
    int ans=1;
    int sum2=1;
    for(int i=1;i<=20;i++){
        if(ans%i==0)continue;
        ans=i*ans/gcd(ans,i);
    }
    printf("%d",ans);

    return 0;
}
