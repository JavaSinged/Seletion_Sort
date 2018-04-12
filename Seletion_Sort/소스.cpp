#include<stdio.h>

void Selection_Sort(int a[], int n) {
	int i, j;
	int min, index;

	for (i = 0; i < n - 1; i++) {
		min = a[i];
		index = i;
		for (j = i + 1; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}

		a[index] = a[i];
		a[i] = min;

		//step 별로 출력
		printf("step %d : ", i);
		for (int k = 0; k < n; k++)
			printf("%d \t", a[k]);
		printf("\n");
	}
}

void main() {
	int array[] = { 5,2,8,1,9,7,3,11,6 };
	int i, count;
	count = sizeof(array) / sizeof(int);

	printf(" 정렬 전 데이터\n ");
	for (i = 0; i < count; i++)
		printf("%d \t", array[i]);
	printf("\n");

	Selection_Sort(array, count);
		printf("정렬 후 데이터\n");
		for (i = 0; i < count; i++)
			printf("%d \t", array[i]);
		printf("\n");
}

