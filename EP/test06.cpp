/*************************************************************************
	> File Name: test06.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 11时04分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int  main(){
    int a;
    while(scanf("%d", &a) != EOF){
        switch(a){
            case 1: printf("one ");
            case 2: printf("two ");
            case 3: printf("three\n");
            break;
            default: printf("error\n");
            break;
        }
    }

    return 0;
}
