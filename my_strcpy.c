#include <stdio.h>

char strA[80] = "A string to be copied";
char strB[80];
char *my_strcpy(char *destination, char *source)
{
	char *p = destination;
	while (*source != '\0')
	{
		*p++ = *source++;
	}
	*p = '\0';
	return destination;
}

int main(void)
{
	my_strcpy(strB, strA);
	puts(strB);

}
