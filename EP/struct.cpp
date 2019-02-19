/*************************************************************************
	> File Name: struct.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 09时18分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

struct person{
    char name[20];
    int age;
    char gender;
    float height;
};

struct node1{
    char a;
    char b;
    int c;
};

struct node2{
    char a;
    int c;
    char b;
};

int main(){
    printf("%zu\n", sizeof(person));
    printf("node1:%zu\nnode2:%zu", sizeof(struct node1), sizeof(struct node2));
    return 0;
}
