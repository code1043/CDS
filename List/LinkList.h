//
//  LinkList.h
//  DS_C
//
//  Created by code on 2024/5/18.
//

#ifndef LinkList_h
#define LinkList_h

#include <stdio.h>
#include "element.h"
#include "header.h"

typedef struct Lnode { //声明结点的类型和指向结点的指针类型
    
    ElemType data;      //结点的数据域
    struct Lnode *next; //结点的指针域
    
} Lnode, *LinkList; //LinkList为指向结构体Lnode的指针类型

Status InitList_Link(LinkList *L); //初始化
Status DestoryList_Link(LinkList *L); //销毁
Status ClearList_Link(LinkList *L); //清空
int GetLength_Link(LinkList L); //获取长度
Bool IsEmpty_Link(LinkList L); //判断是否为空
int GetElem_Link(LinkList L, int i, ElemType *e);
int LocateElem_Link(LinkList L, ElemType e);
Status InsertList_Link(LinkList *L, int i, ElemType e);
Status DeleteList_Link(LinkList *L, int i, ElemType *e);

#endif /* LinkList_h */
