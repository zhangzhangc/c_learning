////
//// Created by zc on 2023/4/8.
////
//
//#include<stdio.h>
//#include <malloc.h>
//#include <intrin.h>
//
//int main(){
//    ///calloc()也是分配内存，他有两个参数，一个是分配值的数量，另一个是分配值的大小
//    int *p=calloc(4,sizeof(int));///相当于给p分配了4块空间，每个空间的大小为4个字节
////    *p=45,22,55,88;
//    ///既然你分配了四个值，那把四个值都给你
//    for(int j=0;j<4;j++){
//        *(p+j)=j;
//    }
//
//    for(int i=0;i<4;i++){
//        printf("%d\n",*(p+i));
//    }
//
//    ///calloc()会把所有的已分配但没有数据的空间初始化为0
//    int *q= calloc(4,sizeof (int));
//    *q=45;             ///给q第一个内存空间的的数据赋值为45
//    printf("q的空间内的数据为：");
//    for(int i=0;i<4;i++){
//        printf("%d\t",*(q+i));        ///打印出所有的q为 45 0 0 0
//
//    }
//
//    /**calloc()函数与malloc()函数不同：
//     * malloc()函数不会对分配的空间初始化，如需初始化还要使用memset()函数
//
//     */
//     ///例
//     int *r=malloc(4*sizeof(int));
//    memset(r,0,sizeof (int)*4);
//    printf("\n最新的malloc()函数分配的空间的初始化为：\n");
//    for(int i=0;i<4;i++){
//        printf("%d\t",*(r+1));
//    }
//
//
//
//
//}
