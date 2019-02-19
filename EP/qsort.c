/*************************************************************************
	> File Name: qsort.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 18时48分02秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int *)b) - (*(int *));
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void qsort(int *num, int l, int r){
    while(l < r) {
        int x= l, y = r,z = num[(l + r) >> 1];
        do{
            while (num[x] < z) x++;
            while (num[y] > z) y--;
            if (x <= y) {
                swap(num[x], num[y]);
                ++x, --y;
            }
        } while (x <= y);
        qsort(num, x, r);
        r = y;
    }
    return ;
}

int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    qsort(num, 0, n-1);
    for(int i = 0; i < n; i++){
        printf("%d", num[i]);
        if(i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}
