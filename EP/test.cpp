/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月19日 星期三 17时14分32秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    char name[101];
    for(int i = 0; i < n; i++){
        int j = 0;
        while(scanf("%c", &name[j])){
            if(name[j++] == '\n'){
                name[j] = '\0';
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(name[0] >= name[i]) continue;
            else if(name[0] < name[i]) strcpy(name[0], name[i]);
        }
    }
    printf("%s", name[0]);
    return 0;
}

