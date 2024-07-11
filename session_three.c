
#include <stdio.h>

#define MAX 100

int main() {
	printf("%s\n", "Session Three");
	// 0 1, 2
	// 0 -> stdin
	// 1 -> stdout
	// 2 -> stderr
	/*
	int num = 0;
	printf("%s\n", "Enter a number: ");
	scanf("%d", &num);
	printf("%s -> %d\n", "The number is ", num);
	*/

	int num = 0;
	char str[MAX] = {'0'};

	printf("%s\n", "Enter a sentence and a number ");
	
	scanf("%d\n", &num);
	fgets(str, MAX, stdin);
	printf("%s -> %s\n", "str is -->>> ", str);

	return 0;
}

