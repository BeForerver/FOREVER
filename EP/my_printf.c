/*************************************************************************
	> File Name: my_printf.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 18时05分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int print_int(int x, int flag){
    if(x == 0){
        flag && putchar('0');
        return !!(flag);
    }
    int temp = x, ret = 0, digit = 0;
    x = 0;
    while(temp){
        x = x * 10 + temp % 10;
        temp /= 10;
        digit ++;
    }
    while(digit--){
        putchar(x % 10 + '0');
        x /= 10;
        ret ++;
    }
    return ret;
}

int print(const char *frm, ...){
    int cnt = 0;
    va_list arg;
    va_start(arg, frm);
    for(int i = 0; frm[i]; i++){
        switch(frm[i]) {
            case '%':{
                i++;
                switch (frm[i]){
                    case 'd':{
                        int temp = va_arg(arg, int);
                        int p1 = temp / 10, p2 = temp % 10;
                        if(temp < 0){
                            p1 = -p1, p2 = -p2;
                            putchar('-');
                            cnt++;
                        }
                        cnt += print_int(p1, 0);
                        cnt += print_int(p2, 1);
                    }break;
                    default :
                        fprintf(stderr, "error unknown %%%c\n",frm[i]);
                        exit(1);
                }
            }break;
            default :
                putchar(frm[i]);
                cnt++;
        }
    }
    va_end(arg);
    return cnt;
}
int main(){
   // int n = 1200300;
    //char k = 'k';
    //print("%s %d \n", "hello", n);
    print("hello haizei\n");
    //PRINt("n = %d", n);
    print("n = %d\n",456);
    print("n = %d\n", -567);
    print("n = %d\n", 12000);
    print("n = %d\n", INT32_MIN);
    print("n = %d\n", INT32_MAX);
    return 0;
}
