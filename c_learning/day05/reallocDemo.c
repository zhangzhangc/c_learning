////
//// Created by zc on 2023/4/9.
///////realloc()函数的使用
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//
//    int *p = calloc(4, sizeof(int));
//    printf("p的内存块：\n");
//for(int i=0;i<4;i++){
//    printf("%d\t",*(p+i));
//}
//
//    printf("%d\n", *p);
//    /**realloc()函数有两个参数，前面一个代表已经分配的内存指针，后面一个是内存块新的大小
//    前面一个参数也可以为NULL，        这就表示是分配一个内存空间了
//     */
//    int *q = realloc(NULL, 5 * sizeof(int));
//    ///等同于  int *q=malloc(5*sizeof(int));
//
//
//    int n = 10;
//    p = realloc(p, n * sizeof(int));
////    更新p的内存块的数量
//printf("更新p后的内存块的大小为\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d\t", *(p + i));
//    }
//}
