/*************************************************************************
	> File Name: test02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 20时47分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int main(){
    char str[50];
    while(scanf("%[^\n]s", str) != EOF){
        getchar();
        printf("%s\n", str);
    }

    return 0;
}
