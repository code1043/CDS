//
//  SqList.h
//  DS_C
//
//  Created by code on 2024/5/7.
//

#ifndef SqList_h
#define SqList_h

#include <stdio.h>

#include "bool.h"

#define ElemType int

#define MaxSize 50

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

//初始化
void ListInit(SqList *L);
//插入
bool ListInsert(SqList *L, int i, ElemType e);
//删除
bool ListDelete(SqList *L, int i, ElemType *e);
//删除顺序表里所有相同的元素
void del_x_1(SqList *L, ElemType x);
// 删除顺序表里所有相同的元素
void del_x_2(SqList *L, ElemType x);


#endif /* SqList_h */
