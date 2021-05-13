#include<stdio.h>
int main()
{
	int sum = 0;
	int n=0;
	scanf_s("%d", &n);
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
}