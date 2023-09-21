#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char a, b;
	
	printf("enter a character : ");
	scanf("%c", &a);
	
	b = a + 1;
	
	printf("the next character of %c (%i) is %c (%i)\n", a, a, b, b);
	
	return 0;
}
