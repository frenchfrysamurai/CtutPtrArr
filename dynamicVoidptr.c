#include <stdio.h>
#include <stdlib.h>

int main() {
	int *intPtr;
	float *floatPtr;
	char *charPtr;

	intPtr = (int *)malloc(sizeof(int));
	floatPtr = (float *)malloc(sizeof(float));
	charPtr = (char *)malloc(sizeof(char));

	if (intPtr == NULL || floatPtr == NULL || charPtr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	*intPtr = 42;
	*floatPtr = 3.14;
	*charPtr = 'a';

	printf("int: %d\n", *intPtr);
	printf("float: %f\n", *floatPtr);
	printf("char: %c\n", *charPtr);

	printf("size of intPtr: %zu\n", sizeof(*intPtr));

	free(intPtr);
	free(floatPtr);
	free(charPtr);

	return 0;
}
