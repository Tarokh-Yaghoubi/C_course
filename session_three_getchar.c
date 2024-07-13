

#include <stdio.h>

int main() {

	/*
	char c  = getchar();
	printf("%c\n" , c);
	putchar(c);
	putchar('\n');
	*/

	int nl = 0;
	char ch;

	// EOF : End Of File
	//
	while ((ch = getchar()) != EOF) {
		if (ch == '\n') {
			nl++;
			printf("%d\n", nl);
		} 
	}

	return 0;

}


