//
//  LinkList.c
//  DS_C
//
//  Created by code on 2024/5/18.
//

#include "LinkList.h"
#include <stdlib.h>

void printListLink(const char *msg, LinkList L) {
    printf("------------正在执行的操作: %s------------\n", msg);
    Lnode *p = L->next;
    while (p) {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    printf("--------------------------------------------------\n");
}

Status InitList_Link(LinkList *L) { //初始化
        
    *L = (LinkList)malloc(sizeof(Lnode));
    if (*L == NULL) {
        return OVERFLOW;
    }
    
    printListLink("InitList_Link",*L);
    return OK;
}

Bool IsEmpty_Link(LinkList L) { //判断是否为空
    printListLink("IsEmpty_Link",L);
    return L->next == NULL;
}

Status DestoryList_Link(LinkList *L) { //销毁
    
    if (ClearList_Link(L) != OK) {
        return ERROR;
    }
    
    free(*L); //删除头结点
    *L = NULL; //链表赋值NULL
    
    return OK;
}

Status ClearList_Link(LinkList *L) { //清空
      
    Lnode *p = (*L)->next;
    Lnode *q;
    
    while (p) { //删除结点
        q = p->next;
        free(p);
        p = q;
    }
    
    (*L)->next = NULL;
    printListLink("ClearList_Link",*L);
    return OK;
}

int GetLength_Link(LinkList L) { //获取长度

    int count = 0;
    Lnode *p = L->next;
    while (p) {
        count++;
        p = p->next;
    }
    printListLink("GetLength_Link",L);
    return count;
}

int GetElem_Link(LinkList L, int i, ElemType *e) {
    
    int j = 1;
    Lnode *p = L->next;
    
    while (p && j < i) {
        p = p->next;
        ++j;
    }
    
    if (!p || j > i) {
        return ERROR;
    }
    *e = p->data;
    printListLink("GetElem_Link",L);
    return OK;
    
}

int LocateElem_Link(LinkList L, ElemType e) {
    
    int i = 1;
    Lnode *p = L->next;
    
    while (p && p->data != e) {
        p = p->next;
        i++;
    }
    
    printListLink("LocateElem_Link", L);
    
    if (p) {
        return i;
    } else {
        return 0;
    }
    
}

Status InsertList_Link(LinkList *L, int i, ElemType e) {
    
    int j = 0;
    Lnode *p = *L;
    
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    
    if (!p || j > i - 1) {
        return ERROR;
    }
    
    Lnode *q = (Lnode*)malloc(sizeof(Lnode));
    q->data = e;
    q->next = p->next;
    p->next = q;
    
    
    printListLink("InsertList_Link", *L);
    
    return OK;
}

Status DeleteList_Link(LinkList *L, int i, ElemType *e) {
    
    int j = 0;
    Lnode *p = *L;
    
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    
    if (!p || j > i - 1) {
        return ERROR;
    }
    
    Lnode *q = p->next;
    *e = q->data;
    p->next = q->next;
    free(q);
    
    
    printListLink("DeleteList_Link", *L);
    
    return OK;
}


