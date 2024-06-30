#include <stdio.h>

#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("Arithmetic operators:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %d\n", a, b, quotient);
    printf("%d %% %d = %d\n", a, b, remainder);

    // Assignment operators
    int c = 10;
    c += 5; // equivalent to c = c + 5;
    printf("\nAssignment operators:\n");
    printf("c += 5 -> c = %d\n", c);

    c -= 3; // equivalent to c = c - 3;
    printf("c -= 3 -> c = %d\n", c);

    c *= 2; // equivalent to c = c * 2;
    printf("c *= 2 -> c = %d\n", c);

    c /= 4; // equivalent to c = c / 4;
    printf("c /= 4 -> c = %d\n", c);

    c %= 3; // equivalent to c = c % 3;
    printf("c %%= 3 -> c = %d\n", c);

    // Comparison operators
    int x = 15, y = 20;
    printf("\nComparison operators:\n");
    printf("%d == %d -> %d\n", x, y, x == y);
    printf("%d != %d -> %d\n", x, y, x != y);
    printf("%d > %d -> %d\n", x, y, x > y);
    printf("%d < %d -> %d\n", x, y, x < y);
    printf("%d >= %d -> %d\n", x, y, x >= y);
    printf("%d <= %d -> %d\n", x, y, x <= y);

    // Logical operators
    int m = 1, n = 0;
    printf("\nLogical operators:\n");
    printf("%d && %d -> %d\n", m, n, m && n);
    printf("%d || %d -> %d\n", m, n, m || n);
    printf("!%d -> %d\n", m, !m);

    // Bitwise operators
    int p = 6;  // binary: 110
    int q = 3;  // binary: 011
    printf("\nBitwise operators:\n");
    printf("%d & %d -> %d\n", p, q, p & q);  // AND
    printf("%d | %d -> %d\n", p, q, p | q);  // OR
    printf("%d ^ %d -> %d\n", p, q, p ^ q);  // XOR
    printf("~%d -> %d\n", p, ~p);            // NOT
    printf("%d << 1 -> %d\n", p, p << 1);    // Left shift
    printf("%d >> 1 -> %d\n", p, p >> 1);    // Right shift

    return 0;
}

// C divides the operators into the following groups:

// Arithmetic operators
// Assignment operators
// Comparison operators
// Logical operators
// Bitwise operators

// Arithmetic Operators
// Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, etc.

// Operator	Name	Description	Example
// +	Addition	Adds together two values	x + y
// -	Subtraction	Subtracts one value from another	x - y
// *	Multiplication	Multiplies two values	x * y
// /	Division	Divides one value by another	x / y
// %	Modulus	Returns the division remainder	x % y
// ++	Increment	Increases the value of a variable by 1	++x
// --	Decrement	Decreases the value of a variable by 1	--x

// Assignment Operators
// Assignment operators are used to assign values to variables.

// Operator	Example	Same As
// =	x = 5	x = 5
// +=	x += 3	x = x + 3
// -=	x -= 3	x = x - 3
// *=	x *= 3	x = x * 3
// /=	x /= 3	x = x / 3
// %=	x %= 3	x = x % 3

// Comparison Operators
// Comparison operators are used to compare two values.

// Operator	Name	Description	Example
// ==	Equal to	Returns true if both values are equal	x == y
// !=	Not equal to	Returns true if both values are not equal	x != y
// >	Greater than	Returns true if the left value is greater than the right value	x > y
// <	Less than	Returns true if the left value is less than the right value	x < y
// >=	Greater than or equal to	Returns true if the left value is greater than or equal to the right value	x >= y
// <=	Less than or equal to	Returns true if the left value is less than or equal to the right value	x <= y

// Logical Operators

// Logical operators are used to determine the logic between variables or values.

// Operator	Name	Description	Example
// &&	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
// ||	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

// Bitwise Operators

// Bitwise operators are used to perform bitwise operations on integers.

// Operator	Name	Description
// &	AND	Sets each bit to 1 if both bits are 1
// |	OR	Sets each bit to 1 if one of two bits is 1
// ^	XOR	Sets each bit to 1 if only one of two bits is 1
// ~	NOT	Inverts all the bits
// <<	Zero fill left shift	Shift left by pushing zeros in from the right and let the leftmost bits fall off
// >>	Signed right shift	Shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off

