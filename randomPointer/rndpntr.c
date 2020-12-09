#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size);

void main() {
	int A[10];
	srand((unsigned)time(NULL));
	array_fill(&A, 10);
	for (int i = 0;i < 10;i++)
		printf("%d\n", A[i]);


}

void array_fill(int* A, int size)
{
	int i;
	for (i = 0;i < size;i++) {
		A[i]=rand();
	}
}
