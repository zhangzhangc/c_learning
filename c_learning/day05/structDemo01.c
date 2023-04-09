////
//// Created by zc on 2023/4/9.
////
//#include<stdio.h>
//
//struct Student {
//    char *name;
//    int age;
//    double grade;
//} stu;
//
//typedef struct Cell_phone {                ///使用typedef可以给结构体起一个别名，更方便使用
//    char *name;
//    long price;
//} Phone;
//
//int main() {
//    struct Student student;
//    printf("%d\n", sizeof(student));///因为最大的占用的字节为char为了对齐，所以结构体的总占用的字节是24
///// ///可以以下的方式
//    stu.name = "张三";
//    stu.age = 15;
//    stu.grade = 88;
//
//    struct Student student1 = {"里斯", 13, 88};
//    struct Student student2 = {.name="王五", .grade=96};
//    printf("stu的名字是：%s", stu.name);
//    Phone phone = {"iphone", 5555};
//    printf("手机的信息:%s %d", phone.name, phone.price);
//
//}