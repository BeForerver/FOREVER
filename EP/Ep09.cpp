/*************************************************************************
	> File Name: Ep09.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 18时46分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#define max_n 1000

int triplet(int a, int b, int c){
    if (a * a + b * b == c * c) return 1;
    else return 0;
}

int main(){
    for(int i = 1; i < max_n; i++){
        for(int j = i; j < max_n; j++){
            for(int k = j + 1; k < max_n; k++){
                if(i + j + k > max_n) continue;
                else if(triplet(i, j, k) && i + j + k == max_n){
                    printf("%d\n", i * j * k);
                }
            }
        }
    }


    return 0;
}
