////
//// Created by zheep on 2024/6/2.
////
//int greatestCommonDivisor(int num1,int num2);
//#include <stdio.h>
//int main(){
//    printf("%d",greatestCommonDivisor(16,24));
//}
//int greatestCommonDivisor(int num1,int num2){
//    int min = num1>num2?num2:num1,max = num1>num2?num1:num2;
//    while (max%min){
//        int num3 = max%min;
//        max = min;
//        min = num3;
//    }
//    return min;
//}