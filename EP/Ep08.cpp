/*************************************************************************
	> File Name: Ep08.cpp
	> Author: 
	> Mail:
    > Created Time: 2018年11月24日 星期六 16时27分48秒
 ************************************************************************/
#include<stdio.h>
#include<inttypes.h>
#include"008.h"
int main(){
    int64_t p=1,zero=0,ans=0;
    for(int i=0;num[i];i++){
        if(num[i]=='0'){
            zero++;
        }else{
            p*=(num[i]-'0');
        }
        if(i>=13){
            if(num[i-13]=='0'){
                zero--;
            }else{
                p/=(num[i-13]-'0');
            }
        }
        if(i>=13&&zero==0&&p>ans)ans=p;
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
