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
//    MS zombie = {"普通僵尸",100,15,5};
//    MS bucket_zombie = {"铁桶僵尸",100,15,30};
//
//    struct Monster monster[] = {zombie,bucket_zombie};
//    changeInfo(&zombie);
//    printf("%s的伤害为：%d，血量为：%d，防御为：%d\n", zombie.name, zombie.harm, zombie.hp, zombie.defense);
//}
//void changeInfo(MS *ms){
//    printf("%s的伤害为：%d，血量为：%d，防御为：%d\n",(*ms).name,(*ms).harm,(*ms).hp,(*ms).defense);
//    printf("请输入姓名:");
//    scanf("%s",(*ms).name);
//    printf("请输入伤害:\n");
//    scanf("%d",&((*ms).harm));
//    printf("请输入血量:\n");
//    scanf("%d",&((*ms).hp));
//    printf("请输入防御:\n");
//    scanf("%d", &((*ms).defense));
//}