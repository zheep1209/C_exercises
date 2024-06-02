////
//// Created by zheep on 2024/6/2.
////
//#include <stdio.h>
//
//long long fibonacci(int num);
//
//int getFactorial(int num);
//
//int main() {
//    printf("%lld", fibonacci(50));
//}
//
//long long fibonacci(int num) {
//    if (num <= 2) {
//        return 1;
//    }
//    return fibonacci(num - 1) + fibonacci(num - 2);
//}
////½×³Ë
//int getFactorial(int num) {
//    if (num <= 1) {
//        return 1;
//    }
//    return num * getFactorial(num - 1);
//}
////×Ö·û´®³¤¶È
//int getLen(char *len) {
//    if (*len != '\0')
//        return (1 + getLen(len + 1));
//    return 0;
//}
//
////1234
//void getPart(int num) {
//    if (num > 9)
//        getPart(num / 10);
//    printf("%d", num % 10);
//}
