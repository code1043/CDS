//
//  SqList.c
//  DS_C
//
//  Created by code on 2024/5/11.
//

#include "SqList.h"
#include <stdlib.h>

Status InitList_Sq(SqList *L) {
    L->elem = (ElemType*)malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if (!L->elem) {
        return OVERFLOW;
    }
    
    L->length = 0;
    
    return OK;
}

void DestoryList_Sq(SqList *L) {
    if (L->elem) {
        free(L->elem);
        L->elem = NULL;
    }
    L->length = 0;
}

void ClearList_Sq(SqList *L) {
    L->length = 0;
}

int GetLength_Sq(SqList L) {
    return L.length;
}

Bool IsEmpty_Sq(SqList L) {
    return L.length == 0;
}

int GetElem_Sq(SqList L, int i, ElemType *e) {
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    
    *e = L.elem[i - 1];
    return OK;
}

int LocateElem_Sq(SqList L, ElemType e) {
    
    int i = 0;
    while (i < L.length && L.elem[i] != e) {
        i++;
    }
    
    if (i < L.length) {
        return i + 1;
    }
    
    return 0;
    
//    for (int i = 0; i < L.length; i++) {
//        if (L.elem[i] == e) {
//            return i + 1;
//        }
//    }
//    return 0;
}

Status InsertList_Sq(SqList *L, int i, ElemType e) {
    
    if (i < 1 || i > L->length + 1) {
        return ERROR;
    }
    
    if (L->length == LIST_INIT_SIZE) {
        return ERROR;
    }
    
    for (int j = L->length - 1; j >= i - 1; j--) {
        L->elem[j + 1] = L->elem[j];
    }
    L->elem[i - 1] = e;
    L->length++;
    
    return OK;
}

Status DeleteList_Sq(SqList *L, int i, ElemType *e) {
    
    if (i < 1 || i > L->length) {
        return ERROR;
    }
    
    *e = L->elem[i - 1];
    
    for (int j = i; j < L->length; j++) {
        L->elem[j - 1] = L->elem[j];
    }
    
    L->length++;
    
    return OK;
    
}
