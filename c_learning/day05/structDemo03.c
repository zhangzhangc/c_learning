////
//// Created by zc on 2023/4/9.
////
//
//#include<stdio.h>
//
//struct turtle{
//    char *name;
//    char *species;
//    int age;
//};
//void happy(struct turtle *t){
//    t->age=t->age+1;            ///等价于(*t).age=(*t).age+7;
//
//
//}
//
//struct name{
//    char firstName[50];
//    char lastName[50];
//};
//struct student{
//    int age;
//    struct name;
//};
//int main(){
//    struct turtle myTurtle={"turtle","sea turtle",99};
//    happy(&myTurtle);
//    printf("%i\n",myTurtle.age);
//
//    struct name myName={"loany","messi"};
//    struct student stu1={3,myName};
//    printf("学生的名字是%s %s\n",myName.firstName,myName.lastName);
//
//}