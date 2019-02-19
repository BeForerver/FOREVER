/*************************************************************************
	> File Name: 0111-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月11日 星期五 20时18分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

int main(){
    int n;
    char *m;
    while(scanf("%d", &n) != EOF){ 
        sprintf(m, "%x", n);
        printf("%d(%s)\n", n, m);
    }
}

