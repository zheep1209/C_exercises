//
// Created by zheep on 2024/6/2.
//
#include <stdio.h>

//void getPart(int num);
int getFactorial(int num);
int main() {
    printf("%d", getFactorial(4));
}
//�׳�
int getFactorial(int num){
    if(num<=1)
        return 1;
    return getFactorial(num)*getFactorial(num-1);
}
////�ַ�������
//int getLen(char *len) {
//    if (*len != '\0')
//        return (1 + getLen(len + 1));
//    return 0;
//}

////1234
//void getPart(int num) {
//    if (num > 9)
//        getPart(num / 10);
//    printf("%d", num % 10);
//}
