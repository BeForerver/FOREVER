/*************************************************************************
	> File Name: Ep02-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 15时19分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include<stdio.h>
#define Max_n 4000000
int main(){
    int a=1,b=1,c,ans=0;
    while(b<=Max_n){        
        if((b&1)==0)ans+=b;
        a=a+b;
        a^=b;
        b^=a;
        a^=b;
    }
    printf("%d\n",ans);
    return 0;

}
