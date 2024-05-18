//
//  List_app.c
//  DS_C
//
//  Created by code on 2024/5/12.
//

#include "List_app.h"
#include "SqList.h"
#include "LinkList.h"

void list_sq_app(void) {
    
    SqList L;
    InitList_Sq(&L);
    
}

void list_link_app(void) {
    LinkList L = NULL;
    
    //初始化
    InitList_Link(&L);
    
    for (int i = 0; i < 10; i++) {
        InsertList_Link(&L, 1 + i, i + 190);
    }
    
    printf("%d\n",GetLength_Link(L));
    
    for (int i = 0, e = 0; i < 5; i++) {
        
        DeleteList_Link(&L, 1, &e);
        printf("%d\n", e);
    }
    
    //
    ClearList_Link(&L);
    
    //
    DestoryList_Link(&L);
    
    
}
