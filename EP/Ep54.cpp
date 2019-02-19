/*************************************************************************
	> File Name: Ep54.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 19时44分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 300


int main(){
    int ans = 0;
    for(int i = 2; i < 100; i++){
        int num[max_n + 5] = {0};
        num[0] = num[1] = 1;
        num[1] = i;
        for(int j = 2; j < 100; j++){
            for(int k = 1; k <= num[0]; k++) num[k] *= i;
            for(int k = 1; k <= num[0]; k++){
                if(num[k] < 10) continue;
                num[k + 1] += num[k] / 10;
                num[k] %= 10;
                num[0] += (num[0] == k);
            }
            int sum = 0;
            for(int k = 1; k < num[0]; k++) sum += num[k];
            if(ans < sum) ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}
