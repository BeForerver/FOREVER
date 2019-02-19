/*************************************************************************
	> File Name: maintest.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 10时37分57秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main( int argc ,char *argv[],char *env[] ){
  //  printf("%d\n",argc);
    if(argc < 2){
        printf(" NO PASSWORD");
    }else{
        for(int i = 0;i < argc; i++){
            if(i == 0){
                if((strcmp(argv[i] , "./aaaaaaaa"))){
                    printf("运行名字不对"); 
                    return 0;
                }
            }else if(i == 1){
                if((strcmp(argv[i],"971122"))){
                    printf("PASSWORD not true ");
                    return 0;
                }
            }
        }
    }
    for(char **p=env; p[0] != NULL ;p++){
        if(strcmp(p[0],"USER=flash") == 0){
            printf("SUCCESS\n");
            return 0;
        }    
    }
    printf("权限不够");




    return 0;
}
