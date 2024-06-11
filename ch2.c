#include <stdio.h>

int main(){

	int j = 2;
	int *ptr;
	ptr = &j;

	int my_array[] = {1, 23, 17, 4, -5, 100};
	int *ptrArr;
	ptrArr = &my_array[0];

	printf("address of j is: %p\n", &j);
	printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
	printf("The value of the integer pointed to by ptr is %d\n", *ptr);
	printf("ptrArr has the value %p and is stored at %p\n", ptrArr, (void *)&ptrArr);

	return 0;
}
