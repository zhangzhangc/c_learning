////
//// Created by zc on 2023/4/9.
////
//
//
///**
// * 通过struct 定义一个简单的链表
// */
//
//#include<stdio.h>
//#include <malloc.h>
//
//struct node{
//    int data;
//    struct node *next;
//};
//
//int main(){
//    struct node *head;                 ///定义一个头节点
//    head= malloc(sizeof (struct node));       ///给头节点分配空间
//    head->data=11;
//    head->next= malloc(sizeof (struct node));///给头节点的下一个节点分配空间
//    head->next->data=22;
//    head->next->next=malloc(sizeof (struct node));
//    head->next->next->data=33;
//    head->next->next->next=NULL;
//    for(struct node *cur=head;cur!=NULL;cur=cur->next){
//        printf("链表里面的数据：%i\n",cur->data);
//
//    }
//
//
//    return 0;
//}