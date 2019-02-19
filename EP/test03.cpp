/*************************************************************************
	> File Name: test03.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 09时45分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#include <math.h>



int main(){
    float x;
    while(scanf("%f", &x) != EOF){
        printf("%f\n", pow(x, 1.0 / 3.0));
    }

    return 0;
}
