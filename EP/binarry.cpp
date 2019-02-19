/*************************************************************************
	> File Name: binarry.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月09日 星期三 18时35分45秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define P(a){\
    printf("[%s : %s : %d]%s : %d\n",__FILE__, __func__, __LINE__, #a, a);\
}
#else 
#define P(a){}
#endif

int main(){
    int arr[5] = {1,2,3,4,5};
    P(arr[3]);
    int n;
    while(scanf("%d", &n) != EOF){
        int sum = (1 + n) / 2;
        P(n);
        printf("%d\n", sum);
    }

    return 0;
}
