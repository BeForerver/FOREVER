/*************************************************************************
	> File Name: Ep19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 20时04分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int init(int sum){
    for(int i = 1901; i <= 2000; i++){
        if(i % 400 == 0){
            sum += 366;
        }else if(i % 4 == 0 && i % 100 != 0){
            sum += 366;
        }else sum += 365;
    }
    return sum;
}

int main(){
    int sum = 0;
    printf("%d %d\n", init(sum), init(sum) / 7);

    return 0;
}
