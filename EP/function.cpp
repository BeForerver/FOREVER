/*************************************************************************
	> File Name: function.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 16时17分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int is_prime(int x);

int main(){
    for(int i = 2; i <= 100; i++){
        if(is_prime(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
