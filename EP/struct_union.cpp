/*************************************************************************
	> File Name: struct_union.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 11时03分16秒
 ************************************************************************/
#include<iostream>
using namespace std;
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct arr{
    int type;
    union{
        int num1;
        float num2;
    }N;
};

void print(arr *n){
    switch(n->type){
        case 0: printf("%d\n", n->N.num1); break;
        case 1: printf("%f\n", n->N.num2); break;
    }
}


void set(arr *n, int num){
    n->type = 0;
    n->N.num1 = num;
}

void set(arr *n, float num){
    n->type = 1;
    n->N.num2 = num;
}

int main(){
    srand(time(0));
    arr arr[20];
    for(int i = 0; i < 20; i++){
        int op = rand() % 2;
        switch(op){
            case 0: {
                int value = rand() % 100;
                set(arr + i, value);
            }break;
            case 1:{
                float value = 1.0 * (rand() % 10000) / 10000 * 100;
                set(arr + i, value);
            }break;
        }
    }
    for(int i = 0; i < 20; i++){
        print(arr + i);
    }

    return 0;
}
