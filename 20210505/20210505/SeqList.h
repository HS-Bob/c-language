#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
typedef int SQDataType;
typedef struct SeqList
{
	SQDataType a[N];
	int size;
}SL;

void SeqListInit(SL* s1);
void seqlistinsert(SL* s1, SQDataType x);