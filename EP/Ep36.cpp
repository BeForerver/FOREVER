/*************************************************************************
	> File Name: Ep36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 20时11分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
#define max_n 1000000

int num[max_n + 5] = {0};

int get_num(int x){
    int temp = x;
    int k = 1, m[9];
    while(temp){
        m[k] = temp % 10;
        k++;
        temp /= 10;
    }
    for(int i = 1; i <= k / 2; i++){
        if(m[i] != m[k - i]) return 0;
    }
    int c = 1, d[100];
    while(x){
        d[c] = x % 2;
        c++;
        x /= 2;
    }
    for(int i = 1; i <= c / 2; i++){
        if(d[i] != d[c - i]) return 0;
    }
    return 1;

}

void init(){
    for(int i = 1; i <= max_n; i++){
        if(i % 2 == 0) continue;
        else if(get_num(i)){
            cout << i << endl;
            num[0] += i;
        }
    }
}

int main(){
    init();
    cout << num[0] << endl;
    return 0;
}
