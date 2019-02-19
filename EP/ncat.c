/*************************************************************************
	> File Name: ncat.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 20时26分47秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"roman.h"

int main(int argc, char * argv[]){
    if(arg == 1){return 0;}
    int type = (argv[1][1] == 'd');
    FTLE *fin = stdin;
    FILE *fout = stdout;
    if(argc >= 3){
        fin = fopen(argv[2], "r");
    }
    if(arg == 4){
        fout = fopen(argv[3], "w");
    }
    char str[1000];
    int line_no = 1;
    while(fscanf(fin, "%[^\n]s", str) != EOF){
        fgetc(fin);
        if(type){
            fprintf(fout, "%d\t%s\n", line_no++, str);
        }else{
            char dst[100];
            to_roman_numeral(dst, line_no++);
            fprintf(fout, "%s\t%s\n", dst, str);
        }
        str[0] = 0;
    }
    return 0;
}
