
/*
 * 数据结构代码文档
 *  1.线性表
 *      1、初始化
 *      2、增：向线性表中第i个位置插入一个元素（i处于合法区间）
 *      3、删：删除第i个位置的元素
 *      4、删：删除值为x的元素
 *      5、查：查找线性表中第i个位置的元素
 *      6、改：将线性表中第一个值为x的元素修改为y
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //常量区域-结构体
const int maxSize = 100;
typedef  struct {           //线性表的结构
    int num;    //存储数据的主体，大小是maxsize
    int *arr;
} LinerList;

 //初始化
 LinerList* InitLinerList(void){
     LinerList* list=(LinerList*) malloc(sizeof(LinerList));
     //开始初始化结构体数据
     list->num=0;
     list->arr=(int*) malloc(sizeof(int)*maxSize);
     for (int i = 0; i < maxSize; ++i) {
        list->arr[i]=0;
     }
     return list;
 }
 //增
 bool insertxLinerlist(LinerList* list,int i,int x){
     //1.判空
     if(!list||list->num==maxSize||i<=0||i>list->num+1) return false;//空表或满表
    //2.从i开始各元素向后移动一位(从下表i-1开始)
     for (int j = list->num-1; j >= i-1; ++j) {
            list->arr[j+1]=list->arr[j];
     }
    //向i-1下表处插入x
    list->arr[i-1]=x;
     list->num++;
     return true;


 }