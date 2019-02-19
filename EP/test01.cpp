/*************************************************************************
	> File Name: test01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 20时11分08秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>


int main(){
    int n;
    //freopen("/dev/null", "w", stderr);
    char str[20] = {0};
    while(scanf("%d", &n) != EOF){
        printf("%d\n", sprintf(str, "%d", n));
    }
    return 0;

}
