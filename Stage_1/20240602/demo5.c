////
//// Created by zheep on 2024/6/2.
////
//#include <stdio.h>
//#include <string.h>
//typedef struct Monster {
//        char name[100];
//        int hp;
//        int harm;
//        int defense;
//} MS;
//void changeInfo(MS *ms);
//int main (){
//    MS zombie = {"��ͨ��ʬ",100,15,5};
//    MS bucket_zombie = {"��Ͱ��ʬ",100,15,30};
//
//    struct Monster monster[] = {zombie,bucket_zombie};
//    changeInfo(&zombie);
//    printf("%s���˺�Ϊ��%d��Ѫ��Ϊ��%d������Ϊ��%d\n", zombie.name, zombie.harm, zombie.hp, zombie.defense);
//}
//void changeInfo(MS *ms){
//    printf("%s���˺�Ϊ��%d��Ѫ��Ϊ��%d������Ϊ��%d\n",(*ms).name,(*ms).harm,(*ms).hp,(*ms).defense);
//    printf("����������:");
//    scanf("%s",(*ms).name);
//    printf("�������˺�:\n");
//    scanf("%d",&((*ms).harm));
//    printf("������Ѫ��:\n");
//    scanf("%d",&((*ms).hp));
//    printf("���������:\n");
//    scanf("%d", &((*ms).defense));
//}