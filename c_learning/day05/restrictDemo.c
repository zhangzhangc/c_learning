////
//// Created by zc on 2023/4/9.
////
//
///**声明指针变量时，可以使用restrict说明符，告诉编译器，该块内存区域只有当前指针一种访问方式，
//其他指针不能读写该块内存。这种指针称为“受限指针”（restrict pointer）*/
/////受限指针restrict
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//    int *restrict p;
//    p=malloc(sizeof(int));
//    int *q=p;
//    *q=0;
//    printf("%d",*q);
//
//
//}