/*************************************************************************
	> File Name: Ep04.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 18时04分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int is_valid(int x){
    int temp=x,num=0;
    while(x){
        num=num*10+x%10;
        x/=10;
    }
    return temp==num;
}
int main(){
    int ans=10000;    
    for(int a=100;a<1000;a++){
        for(int b=ans/a+1;b<=a;b++){            
            if(!is_valid(a*b))continue;
            if(ans>=a*b)continue;
            printf("%d*%d=%d\n",a,b,a*b);
            ans=a*b;
        }
    }
    printf("%d\n",ans);
    return 0;
}
