/*************************************************************************
	> File Name: 0111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月11日 星期五 18时47分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

char str1[] = "aaaaaaaa";
char str2[] = "abbbbbbbb";

int mystrcmp(const char *str1, const char *str2){
    int temp1 = sizeof(str1), temp2 = sizeof(str2);
    int n1 = 0, n2 = 0;
    for(int i = 0; i <= temp1; i++){
        if(str1[i] == '\0') break;
        n1 += str1[i];
    }
    for(int i = 0; i <= temp2; i++){
        if(str2[i] == '\0') break;
        n2 += str2[i];
    }
  
    return n1 - n2;   

}

int mystrlen(char *arr){
    int temp = 0;
    for(int i = 0; i <= sizeof(arr); i++){
        if(arr[i] == '\0') break;
        else temp++;
    }
    return temp;
}

int strcmp(char *str1, char *str2, int n){
    int i = 0;
    while(i < n && str1[i] && str2[i] && str1 == str2) i++;
    if(i == n) return 0;
    return str1[i] - str2[i];
}


int main(){
    printf("%d\n", mystrcmp(str1, str2));
    printf("%d\n", mystrcmp(str1, "hhh"));
    printf("%d %d\n", mystrlen(str1), mystrlen(str2));
    printf("%d\n", strcmp(str1, str2, 1));
    return 0;
}
