#include"SeqList.h"

void SeqListInit(SL* ps1) {
	memset(ps1->a, 0, N * sizeof(SQDataType));
	ps1->size = 0;
}

void seqlistinsert(SL* ps1, SQDataType x) {
	ps1->a[ps1->size] = x;
	ps1->size++;
}