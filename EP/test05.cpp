/*************************************************************************
	> File Name: test05.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 10时12分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        if(a == 0){
            printf("FOOLISH\n");
        }else if(a < 60){
            printf("FALL\n");
        }else if(a < 75){
            printf("MEDIUM\n");
        }else if(a <= 100) {
            printf("GOOD\n");
        }else printf("BOOLSHIT\n");
    }
    return 0;
}
