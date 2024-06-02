////
//// Created by zheep on 2024/5/31.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int checkDuplicates(int arr[], int num, int len) {
//    for (int i = 0; i < len; i++) {
//        if (arr[i] == num) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    int arr[10] = {0};
//    int len = sizeof(arr) / sizeof(int);
//    srand(time(NULL));
//    for (int i = 0; i < 10;) {
//        int num = rand() % 10 + 1;
//        if (!checkDuplicates(arr, num, len)) {
//            arr[i] = num;
//            i++;
//        }
//    }
//    int sum = 0;
//    for (int i = 0; i < len; i++) {
//        sum += arr[i];
//    }
//    printf("sum:%d\n", sum);
//    int greateAvgSum = 0;
//    for (int i = 0; i < len; i++) {
//        printf("%d\n", arr[i]);
//        if (arr[i] > sum / len) {
//            greateAvgSum++;
//        }
//    }
//    printf("greater than average:%d", greateAvgSum);
//}