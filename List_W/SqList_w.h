//
//  SqList.h
//  DS_C
//
//  Created by code on 2024/5/7.
//

#ifndef SqList_w_h
#define SqList_w_h

#include <stdio.h>

#include "bool_w.h"

#define ElemType int

#define MaxSize 50

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList_w;

//初始化
void ListInit(SqList_w *L);
//插入
bool ListInsert(SqList_w *L, int i, ElemType e);
//删除
bool ListDelete(SqList_w *L, int i, ElemType *e);
//删除顺序表里所有相同的元素
void del_x_1(SqList_w *L, ElemType x);
// 删除顺序表里所有相同的元素
void del_x_2(SqList_w *L, ElemType x);


#endif /* SqList_w_h */
