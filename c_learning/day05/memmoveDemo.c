////
//// Created by zc on 2023/4/9.
////
///**
//* memove()函数的使用
// * memmove()函数用于将一段内存数据复制到另一段内存。它跟memcpy()的主要区别是，
// * 它允许目标区域与源区域有重叠。如果发生重叠，源区域的内容会被更改；如果没有重叠，它与memcpy()行为相同。
// *
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(){
//    char x[]="Home Sweet Home";
//    char *p=memmove(x,&x[5],10);
//    printf("%s",p);
//
//
//
//}