/*************************************************************************
	> File Name: Ep45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 10时57分44秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

typedef int64_t int1;

int1 pentagonal(int1 n){
    return n * (3 * n - 1) / 2;
}

int1 hexagonal(int1 n){
    return n * (2 * n - 1);
}


int main(){
    int1 ans = 40756;
    int1 i = 144, j = 166;
    while(hexagonal(i)){
        if(pentagonal(j) < hexagonal(i)) j++;
        if(pentagonal(j) > hexagonal(i)) i++;
        if(pentagonal(j) == hexagonal(i)){
            ans = pentagonal(j);
            printf("%" PRId64"\n", pentagonal(j));
            break;
        }
    }
    printf("%" PRId64"\n", ans);
    return 0;
}
