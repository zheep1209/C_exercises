//
// Created by zheep on 2024/6/16.
//
//链表练习
#include <stdio.h>
#include <malloc.h>

//芝士节点
typedef struct node {
    int value;
    struct node *next;
} nodeT;

//初始化链表
nodeT *init_list(int value) {
//    分配节点内存
    nodeT *node = (nodeT *) malloc(sizeof(nodeT));
//    初始化节点数据
    node->value = value;
    node->next = NULL;
//    返回节点
    return node;
}

//添加节点到链表末尾
void addNode(nodeT *node, int value) {
    nodeT *newNode = (nodeT *) malloc(sizeof(nodeT));
    newNode->value = value;
    newNode->next = NULL;
    while (node->next!=NULL){
        node = node->next;
    }
    node->next = newNode;
}
//删除链表
void deleteList(nodeT *node){
    nodeT *next = NULL;
    if (node!=NULL){
        next = node->next;
        free(node);
        deleteList(next);
    }
}
//打印链表
void printList(nodeT *node){
    printf("[");
    while (node->next){
        printf("%d ",node->value);
        node=node->next;
    }
    printf("]");
}
int main(){
//    测试
    nodeT *demoList = init_list(100);
    addNode(demoList,200);
    addNode(demoList,300);
    addNode(demoList,400);
    addNode(demoList,500);
    printList(demoList);
}