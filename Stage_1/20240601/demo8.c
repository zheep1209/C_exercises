////
//// Created by zheep on 2024/6/1.
////
//#include<stdio.h>
//
//int main() {
//    int arr[3][5] = {{11, 12, 13, 14, 15},
//                     {21, 22, 23, 24, 25},
//                     {31, 32, 33, 34, 35}
//    };
//    int (*p)[5] = arr;//默认指向二维数组中的第一个数组
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 5; j++) {
//            printf("%d ", *(*p + j));//p解析后得出的是一维数组的整体地址值，参与运算后自动降级为以为数组中第一个int地址，然后解析得出来一维数组的元素
//        }
//        printf("\n");
//        p++;
//    }
//};
