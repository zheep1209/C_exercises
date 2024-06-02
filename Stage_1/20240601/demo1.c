////
//// Created by zheep on 2024/6/1.
////
//void printArr(int arr[], int len);
//
//#include <stdio.h>
//
//int main() {
//    int arr[5] = {};
//    int len = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < len; i++) {
//        printf("%d", i);
//        scanf("%d", &arr[i]);
//    }
//    printArr(arr, len);
//    int i = 0;
//    int j = len - 1;
//    while (i < j) {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        i++;
//        j--;
//    }
//    printArr(arr, len);
//}
//
//void printArr(int arr[], int len) {
//    for (int i = 0; i < len; i++) {
//        printf("%d\n", arr[i]);
//    }
//}