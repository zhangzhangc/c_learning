////
//// Created by zc on 2023/4/6.
////
//#include<stdio.h>
//int increment(int *n){
//     return ++*n;         /*自增1*/
//
//}
//
//void  swap(int *a,int *b){                //注意传进来的是地址
//    int temp=*a;             //这里指向的是a的地址
//    *a=*b;
//    *b=temp;
//
//}
//
//void counter(){
//    static int count=1;            //static只会初始化一次
//    count++;
//    printf("\ncount=%d",count);
//}
//int main(){
//    int a=10,b=20;
//    swap(&a,&b);   //交换连个数的值
//    printf("\na=%d,b=%d",a,b);
//    int i=10;
//  i= increment(&i);
//    printf("\ni=%d",i);
//    counter();
//    counter();
//    counter();
//    counter();
//
//    return 0;
//}