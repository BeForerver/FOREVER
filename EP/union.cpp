/*************************************************************************
	> File Name: union.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 09时47分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

union IP{
    //int a;
    struct {
        unsigned char arr[4];
    }ip;
    unsigned int m;
};

int main(){
    IP ip;
    int a, b, c, d;
    while(scanf("%d.%d.%d.%d", &a, &b, &c, &d) != EOF){
        ip.ip.arr[0] = a;
        ip.ip.arr[1] = b;
        ip.ip.arr[2] = c;
        ip.ip.arr[3] = d;
        printf("%u\n", ip.m);
    }
   //printf("%u\n", Ip.a);
    return 0;
}
