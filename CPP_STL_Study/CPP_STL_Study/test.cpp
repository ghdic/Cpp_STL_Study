#include <stdio.h>
#include <stdlib.h>

struct example {
	int n;
	int f[];
};

struct example2 {
	int n;
	int *f;
};

int main() {

	struct example * p1;
	struct example2 * p2;
	int * temp;

	p1 = (struct example *)calloc(5, sizeof(int));
	p2 = (struct example2 *)calloc(5, sizeof(int));
	temp = (int *)p2;
	printf("%d %d %d %d %d \n", p1->n, p1->f[0], p1->f[1], p1->f[2], p1->f[3]);
	printf("%d %d %d %d %d \n", *temp, *(temp + 1), *(temp + 2), *(temp + 3), *(temp + 4));
	//int형 만큼 포인터 크기가 증가해야되므로 temp를 사용한다 example2로 할경우 struct 크기만큼된다
	printf("%d", sizeof(p1));
	printf("%d", sizeof(p2));
	return 0;
}