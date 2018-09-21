#include <stdio.h> 

int main() 
{ 
	char s[30]; 
	if (scanf("%s", s)!=EOF) 
		printf("Hello, %s!", s); 
	else
		printf("Hello, nameless!"); 
	return 0; 
}
