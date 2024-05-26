#include <stdio.h>
#include "DS.h"


/*
 * 主函数-用于调试DS.h的其他函数
 *
 *
 *
 * */
int main(void) {
   //线性表调试
   LinerList* list =InitLinerList();//创建线性表
    printf("init = %d\n",  !!list );
    printf("insert =%d\n", insertxLinerlist(list, 2, 3));

    return 0;
}
