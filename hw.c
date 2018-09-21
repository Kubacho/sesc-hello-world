#include <stdio.h>

int main()
{
	char s[30];
	scanf("%s", s);
	if(s[0] == EOF)
	printf("Hello, nameless!\n");
	else
	printf("Hello, %s!\n", s);
	return 0;
}
