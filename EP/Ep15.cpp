/*************************************************************************
	> File Name: Ep15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 18时09分50秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>


int main(){
    int64_t m = 20, n = 20;
    int64_t ans1 = 1, ans2 = 1;
    for(int i = 21; i <= 40; i++){
        ans1 *= i;
        ans1 /= (i - 20);
    }
    printf("%" PRId64 "\n", ans1);
    printf("%" PRId64"\n", ans2);
    printf("%" PRId64"\n", ans1);
    return 0;
}

