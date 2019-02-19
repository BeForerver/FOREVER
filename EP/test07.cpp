/*************************************************************************
	> File Name: test07.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 11时24分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int func(int n){
    int a = 1;
    if(n > 1) a = func(n - 1) * n;
    else return a;
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        printf("%d\n", func(n));
    }
    return 0;
}
