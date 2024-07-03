

/*
 *
 *	author: Tarokh
 *	Channel: t.me/KernelKudos
 *	Description: Format Specifiers, Variables, Data Type, Operators
 *
 */


#include <stdio.h>

// K & R 

int
main(void) {


	// %format_specifier
	// %d -> decimal
	// %f -> float
	// %c -> character 
	// %s -> string of characters 
	// %lf -> double
	
	// DATA_TYPE VARIABLE_NAME = INITIALIZE;
	// declaration - definition
	int first_number;	// declare - garbage initialized 
	
	// define first_number
	first_number = 15;

	int second_number = 45;
	float PI = 3.14;
	char character_a = 'A';

	int result = first_number + second_number + 9;
	printf("%s %d\n", "the result of this sum is --->>> ", result);

	printf("%.2f %d %c\n", PI, second_number, character_a);



	printf("%s %d\n", "my first number is --->>> ", first_number);
	printf("These are my strings ->>> [%s]\t[%s]\n", "tarokh is a chef", "owls can suicide");

	printf("tarokh is not a bad programmer\ntarokh is a moderate programmer\n");
	return 0;

}

