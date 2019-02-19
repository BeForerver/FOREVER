/*************************************************************************
	> File Name: Ep20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 09时06分48秒
 ************************************************************************/

#include <stdio.h>
#define max_n 100

int snum[500] = {0};
void init(){
    snum[0] = 1;
    snum[1] = 1;
    int i;
    for(i = 1; i <= max_n; i++){
        for(int j = 1; j <= snum[0]; j++){
            snum[j] *= i;
        }
        for(int j = 1; j <= snum[0]; j++){
            if(snum[j] < 10) continue;
            snum[j + 1] += snum[j] / 10;
            snum[j] %= 10;
            if(j == snum[0]) snum[0]++;
        }
    }
    
}


int  main(){
    init();
    int ans = 0;
    for(int i = 1; i <= 500; i++){
        printf("%d", snum[i]);
        ans += snum[i];
    }
    printf("\n%d\n", ans);

    return 0;
}
