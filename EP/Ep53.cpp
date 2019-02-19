/*************************************************************************
	> File Name: Ep53.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 19时19分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100
int num[max_n + 5][max_n + 5] = {0};

void init(){
    int cnt = 0;
    for(int i = 1; i <= max_n; i++){
        num[i][0] = num[i][i] = 1;
        for(int j = 1; j < i; j++){
            num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
            if(num[i][j] > 1000000) num[i][j] =1000001;
            cnt += (num[i][j] > 1000000);
        }
    }
    cout << num[23][10] <<endl;
    cout << cnt << endl;
}


int main(){
    init();
    return 0;
}
