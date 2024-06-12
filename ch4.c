#include <stdio.h>

char a[20];
int i;

char *my_strcpy(char dest[], char source[])
{
	int i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

size_t my_strlen(const char *str) {
	size_t length = 0;
	while (str[length] != '\0') {
		length++;
	}
	return length;
}

int main(void)
{
	const char *testString = "Hello, world!";
	3[a] = 'x';

	printf("Here is the letter: %c\n", 3[a]);

	printf("The length of the string \"%s\" is: %zu\n", testString, my_strlen(testString));

	return 0;
}
