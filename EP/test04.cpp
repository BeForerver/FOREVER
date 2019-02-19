/*************************************************************************
	> File Name: test04.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 09时54分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#include <math.h>


int main(){
    float n;
    while(scanf("%f", &n) != EOF){
        printf("%f", n / 180 * acos(-1));
    }
    return 0;
}
