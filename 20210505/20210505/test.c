#include"SeqList.h"
int main() {
	SL s1;
	SeqListInit(&s1);
	for (int i = 0; i < N; i++) {
 		printf("%d ", s1.a[i]);
	}
	printf("\n");
	seqlistinsert(&s1, 3);
	seqlistinsert(&s1, 4);
	seqlistinsert(&s1, 5);
	seqlistinsert(&s1, 6);
	seqlistinsert(&s1, 7);
	for (int i = 0; i < N; i++) {
		printf("%d ", s1.a[i]);
	}
	return 0;
}