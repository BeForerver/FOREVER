/*************************************************************************
	> File Name: test08.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 14时36分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int get_num(int i, int n){
    if(i <= n) printf("%d\n", i);
    else return i;
    return get_num(i + 1, n);
}

int main(){
    int n;
    scanf("%d", &n);
    get_num(1, n);
    return 0;
}
