#include <stdio.h>

// Function to concatenate two strings
char *my_strcat(char *dest, const char *src) {
	char *dest_start = dest;

	// Move dest to the end of the current string
	while (*dest != '\0'){
		dest++;
	}

	// Copy characters from src to dest
	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}

	// Null-terminate the result
	*dest = '\0';

	// Return the starting address of dest
	return dest_start;
}

int main() {
	char dest[50] = "Hello, ";
	const char *src = "world!";

	my_strcat(dest, src);
	printf("%s\n", dest); // Output: Hello, world!

	return 0;
}
