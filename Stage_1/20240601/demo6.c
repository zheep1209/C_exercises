//
// Created by zheep on 2024/6/1.
//
//void swap(void *p1, void *p2, int step);
//
//#include <stdio.h>
//
//int main() {
//    long long a = 114514;
//    long long b = 1919810;
//    printf("a:%lld,b:%lld\n", a, b);
//    swap(&a, &b,8);
//    printf("a:%lld,b:%lld", a, b);
//}
//
//void swap(void *p1, void *p2, int step) {
//    char *pl1 = p1;
//    char *pl2 = p2;
//    char temp = 0;
//    for (int i = 0; i < step; i++) {
//        printf("----------------------------------\n");
//        printf("交换前：*pl1 %d\t*pl2 %d\n",*pl1,*pl2);
//        temp = *pl1;
//        *pl1 = *pl2;
//        *pl2 = temp;
//        printf("交换后：*pl1 %d\t*pl2 %d\n",*pl1,*pl2);
//        pl1++;
//        pl2++;
//    }
//}
