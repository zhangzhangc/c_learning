////
//// Created by zc on 2023/4/4.
////
//#include<stdio.h>
//struct Dog{
//    char *name;
//    int age;
//    double weight;
//};
//
//char *say(struct Dog dog){
//    static char info[50];
//    dog.name="小黄";
//    sprintf(info,"name=%s age=%d weight=%.2f",dog.name,dog.age,dog.weight);
//
//    return info;
//
//};
//void main(){
//    struct  Dog dog;
//    char *info=NULL;
//    dog.name="小黑";
//    dog.age=5;
//    dog.weight=45;
//     info=say(dog);
//     printf("\n小狗的信息%s",info);
//
//}
//
//
