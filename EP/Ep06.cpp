/*************************************************************************
	> File Name: Ep06.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 18时41分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include<stdio.h>

int main(){
    int sum1=0,sum2=5050;
    for(int a=1;a<=100;a++){
        sum1+=a*a;
    }
    printf("%d\n",sum2*sum2-sum1);
    return 0;
}
