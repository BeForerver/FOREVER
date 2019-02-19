/*************************************************************************
	> File Name: 0109-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月09日 星期三 20时46分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define MAX(a,b)({ \
    __typeof(a) __a = a;\
    __typeof(b) __b = b;\
    ((__a) > (__b) ? __a : __b);\
})

int main(){
    int a = 7;
    printf("%d\n", MAX(2, 3));
    printf("%d\n",5 + MAX(2, 3));
    printf("%d\n", MAX(2, MAX(3, 4)));
    printf("%d\n", MAX(2, 3 > 4? 3 : 4));
    printf("%d\n", MAX(a++, 6));
    printf("%d\n", a);
    return 0;
}
