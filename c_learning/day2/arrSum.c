////
//// Created by zc on 2023/4/6.
////
//#include<stdio.h>
//
////求数组之和
//int sum(int *arr,int len){
//    int total=0;
//    for(int i=0;i<len;i++){
//        total+=arr[i];
//    }
//    return total;
//
//}
//int main(){
//    int arr[5]={1,2,3,4,5};
//    int s=sum(arr,5);
//    int *B=arr;
//    printf("数组的第一个元素是%d\n",*(B));
//    printf("数组的第二个元素是%d\n",*(B+1));
//
//    printf("数组之和是%d\n",s);
//
//
//    //找到5
//    int *p=arr;
//    while(*p!=5){
//        printf("%d\t",*p);
//        p++;
//    }
//}
