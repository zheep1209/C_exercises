//
// Created by zheep on 2024/6/12.
//
#include <stdio.h>
#include <string.h>
#define OK 1
#define ERROR -1
#define MAXSIZE 10
int ListInsert(char *arr, int i, char insertNum);
int getLength(char arr[]);
int main() {
    char arr[MAXSIZE] = {'a', 'b', 'c', 'd', 'e'};
    char outcome[100];
    strcpy(outcome,ListInsert(arr, 5, 'X') == 1 ? "OK" : "ERROR");
    printf("%s\n",outcome);
    printf("%d\n", getLength(arr));
    for (int i = 0; i < MAXSIZE; i++){
        printf("%c\n",arr[i]);
    }
}

int ListInsert(char *arr, int i, char insertElem) {
    if (i < 0 || i > getLength(arr)) return ERROR;
    if (getLength(arr)==MAXSIZE) return ERROR;
    for (int j = getLength(arr); j < i-1; j--) {
        arr[j+1] = arr[j];
    }
    arr[i] = insertElem;
    return OK;
}
int getLength(char arr[]){
    int length;
    for (int i = 0; i < MAXSIZE; i++) {
        if(arr[i] =='\0') break;
        length = i+1;
    }
    return length;
}