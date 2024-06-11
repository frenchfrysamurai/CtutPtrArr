#include <stdio.h>

void printValue(void *value, char type) {
	switch (type) {
		case 'i': // int
			printf("%d\n", *(int *)value);
			break;
		case 'f': // float
			printf("%f\n", *(float *)value);
			break;
		case 'c': // char
			printf("%c\n", *(char *)value);
			break;
		default:
			printf("Unsupported type\n");
	}
}

int main() {
	int i = 10;
	float f = 3.14;
	char c = 'a';

	printValue(&i, 'i');
	printValue(&f, 'f');
	printValue(&c, 'c');

	return 0;
}
