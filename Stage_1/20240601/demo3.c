////
//// Created by zheep on 2024/6/1.
////
//void getMaxAndMin(int arr[], int len, int *max, int *min);
//
//#include <stdio.h>
//
//int main() {
//    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int max = arr[0];
//    int min = arr[0];
//    getMaxAndMin(arr, sizeof(arr) / sizeof(int), &max, &min);
//    printf("%d,%d", max, min);
//}
//
//void getMaxAndMin(int arr[], int len, int *max, int *min) {
//    for (int i = 0; i < len; ++i) {
//        if (*max < arr[i]) {
//            *max = arr[i];
//        }
//        if (*min > arr[i]) {
//            *min = arr[i];
//        }
//    }
//};