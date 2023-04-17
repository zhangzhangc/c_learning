//
// Created by zc on 2023/4/15.
//
#include<stdio.h>
#include <stdbool.h>

///判断一个数是不是回文数
bool check(int x){
   if(x<0){
       return false;
   }
   int div=1;
   while(x/div>=10){                ///判断数的位数
       div=div*10;
   }
   while(x>0){
       int left=x/div;
       int right=x%10;
       if(left!=right){
           return false;
       }
       x=(x%10)/div;
       div=div/10;

   }

    return true;


}
int main(){

    printf("%d",check(2005));

}