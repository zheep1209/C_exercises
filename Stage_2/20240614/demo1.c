//
// Created by zheep on 2024/6/14.
//
#include <stdio.h>
#include <string.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode *addNumbers(struct  ListNode *l,int *number){
    while (l->next){
        l=l->next;
    }
    if(!l->next){
        l->next = number;
        l=l->next;
        l->val = *number;
    }
}
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    int num1=0;
    int num2=0;
    while (l1 -> next) {
        num1 += 10 * l1->val;
    }
    while (l2 -> next) {
        num2 += 10 * l2->val;
    }
    return
}
int main(){
    struct ListNode l1;
    l1.val =  1;
    int num = 2;
    addNumbers(&l1,&num);


}