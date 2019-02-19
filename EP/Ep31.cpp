/*************************************************************************
	> File Name: Ep31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月21日 星期五 18时43分24秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
typedef int64_t int1;
int w(int k){
    static int arr[8] = {
        1, 2, 5, 10, 20, 50, 100, 200
    };
    return arr[k - 1];
}

int1 a[13][2005] = {0};

int1 f(int1 k, int1 n){
    a[1][n] = {1};
    a[k][0] = {1};
    if(n < 0) return 0;
    if(a[k][n] == 0) a[k][n] = f(k - 1, n) + f(k, n - w(k));
    return a[k][n];

    //return f(k - 1, n) + f(k, n - w(k));
}
int main(){
    printf("%" PRId64"\n", f(8, 2000));
    return 0;
}
