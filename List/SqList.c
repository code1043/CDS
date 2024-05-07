//
//  SqList.c
//  DS_C
//
//  Created by code on 2024/5/7.
//

#include "SqList.h"

void ListInit(SqList *L) {
    L->length = 0;
}

//插入
bool ListInsert(SqList *L, int i, ElemType e) {

    if (i < 1 || i > L->length + 1) { //判断插入的位置i是否有效
        return false;
    }
    
    if (L->length >= MaxSize) { //当前存储空间已满，不能插入
        return false;
    }

    //插入元素，把i位置之后的元素全部后移一位
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    
    L->data[i - 1] = e; //将位置i存放e
    L->length++;        //长度+1

    return true;
}

//删除
bool ListDelete(SqList *L, int i, ElemType *e) {

    if (i < 1 || i > L->length) { //判断插入的位置i是否有效
        return false;
    }

    *e = L->data[i - 1]; //将被删除的元素赋值给e

    // 删除的实现是将第i个位置后的元素前移
    for (int j = i; j <= L->length; j++) {
        L->data[j - 1] = L->data[j];
    }

    L->length--; //顺序表长度-1

    return true;
}

//删除顺序表里所有相同的元素
void del_x_1(SqList *L, ElemType x) {
    //本算法实现删除顺序表工中所有值为x的数据元素
    int k = 0; // 记录值不等于x的元素个数
    for (int i = 0; i < L->length; i++) {
        if (L->data[i] != x) {
            L->data[k] = L->data[i];
            k++;    //不等于x的元素增 1
        }
    }

    L->length = k; //顺序表工的长度等于k

    
}

// 删除顺序表里所有相同的元素
void del_x_2(SqList *L, ElemType x) {
    int k = 0, i = 0; //k 记录值等于x的元素个数
    while ( i < L->length) {
        if (L->data[i] == x) {
            k++;
        } else {
            L->data[i - k] = L->data[i]; //当前元素前移k个位置
        }
        i++;
    }
    L->length = L->length - k; ////顺序表工的长度递减
}

void printSqList(SqList *L) {

    //查看顺序表里的元素
    printf("顺序表里的元素: ");
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}



