////
//// Created by zc on 2023/4/9.
////
//#include<stdlib.h>
//#include <string.h>
//#include<stdio.h>
//
//int main(){
//    char s[]="Goats";
//    char t[100];
//    /** memcpy()是将一块内存拷贝到另一块内存上的
//     * 包含有三个参数，目标地址，源地址，第三个参数代表的是拷贝的字节数
//     * //memcpy()只是将一个内存里面的内容复制到另一个内存,不需要知道内存里面的数据是什么
//     * */
//
//    memcpy(t,s,sizeof (s));
//    printf("%s",t);
//
//
//
/////   --------------------------------------------------------------------------------
//
////memcpy()与strcpy()的区别
//
//char *p="helloWorld";
//printf("p=%s",p);
//size_t len= strlen(p)+1;
//    char *q=malloc(len);          ///给q分配一个大小为len的空间
//    if(q){
////        strcpy(q,p);         //把内存拷贝到另一块内存上
////        printf("\nq的值是:%s",q);
//
//        memcpy(q,p,len);
//        printf("\nq的值是%s",q);
//    }
//
//
//
//}