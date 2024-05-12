//
//  SqList.h
//  DS_C
//
//  Created by code on 2024/5/11.
//

#ifndef SqList_h
#define SqList_h

#include <stdio.h>
#include "header.h"
#include "element.h"

#define LIST_INIT_SIZE 100

typedef struct {
    ElemType *elem;
    int length;
} SqList;

Status InitList_Sq(SqList *L); //初始化
void DestoryList_Sq(SqList *L); //销毁
void ClearList_Sq(SqList *L); //清空
int GetLength_Sq(SqList L); //获取长度
Bool IsEmpty_Sq(SqList L); //判断是否为空
int GetElem_Sq(SqList L, int i, ElemType *e);
int LocateElem_Sq(SqList L, ElemType e);
Status InsertList_Sq(SqList *L, int i, ElemType e);
Status DeleteList_Sq(SqList *L, int i, ElemType *e);
//typedef struct {
//    ElemType elem[LIST_INIT_SIZE];
//    int length;     //长度
//} SqList; //定义顺序表类型

#endif /* SqList_h */
