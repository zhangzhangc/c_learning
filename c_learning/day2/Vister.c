////
//// Created by zc on 2023/4/5.
////
//
//#include<stdio.h>
//struct Visitor{
//    char name[10];
//    int age;
//    double pay;
//
//};
//void ticket(struct Visitor *visitor){
//    if(visitor->age>20 ){
//        visitor->pay=40;
//    }else{
//        visitor->pay=0;
//    }
//}
//
//void main(){
//    struct Visitor visitor;
//    while(1){
//        printf("%s请输入游客的名字");
//        scanf("%s",visitor.name);
//        printf("%s请输入游客的年龄");
//        scanf("%s",visitor.age);
//        ticket(&visitor);
//        printf("%f该游客的票价为",visitor.pay);
//
//
//    }
//}