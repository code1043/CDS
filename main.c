//
//  main.c
//  DS_C
//
//  Created by code on 2024/5/7.
//

#include "SqList.h"

int main(void) {
    
    SqList l;
    //初始化顺序表
    ListInit(&l);

    //插入元素
    ListInsert(&l, 1, 100);
    ListInsert(&l, 1, 123);
    ListInsert(&l, 1, 100);
    ListInsert(&l, 1, 124);
    ListInsert(&l, 1, 100);
    printSqList(&l);

    //删除相同的元素
    del_x_1(&l, 100);
    printSqList(&l);

        //插入元素
    ListInsert(&l, 1, 100);
    ListInsert(&l, 1, 123);
    ListInsert(&l, 1, 100);
    ListInsert(&l, 1, 124);
    ListInsert(&l, 1, 100);
    printSqList(&l);

    //删除元素
    del_x_1(&l, 100);
    printSqList(&l);

    //删除元素
    ElemType e;
    ListDelete(&l, 1, &e);
    printf("删除位置为1的元素: %d\n", e);
    printSqList(&l);
    
    return 0;
}
