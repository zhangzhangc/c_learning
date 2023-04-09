//
// Created by zc on 2023/4/9.
//
/**
* typedef 主要的作用是为数据类型类型起一个别名
*/
#include<stdio.h>

typedef struct dog {
    int age;
    char *name;
} dog1;
///也可以给匿名结构体起别名
typedef struct {
    char *species;
    int age;
} Big;

int main(){
    dog1 d;
    d.name="号";
    printf("%s",d.name);
    Big big={"sea",12};
    printf("\n匿名结构体里面的数据是%s",big.species);
}