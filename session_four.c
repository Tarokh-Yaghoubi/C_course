
#include <stdio.h>

int main() {
    // sequence of data
    /**       0   1   2
     *      | 1 | 2 | 3 | ... |
     */

    // DATA_TYPE NAME[SIZE] = {INITIALIZE-ARRAY};
    // DATA_TYPE NAME[SIZE];

    // data type can be ---->>>> int, float, double, char, ...

    //    int numbers[10];
    //
    //    //    numbers[0] = 0;
    //    //    numbers[1] = 1;
    //
    //    for (int i = 0; i < 10; i++)
    //        numbers[i] = i;
    //
    //    for (int i = 0; i < 10; i++)
    //        printf("%d ", numbers[i]);
    //
    //    numbers[150] = 15;
    //    printf("\n %d \n", numbers[150]);

    // '5' -> 35
    // '3' -> 33
    // '8' -> 38

    int i, c, nwhite, nother;
    int ndigit[10]; // 0 -> 9 = 0


    nwhite = nother = 0;

    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    // 0, 0, 0, 0, 0, 0, 0, 0, 5, 0

    while ((c = getchar()) != 'x')
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits= ");
    for (int j = 0; j < 10; ++j)
        printf(" %d", ndigit[j]);

    printf(", nwhite = %d , nother = %d \n", nwhite, nother);
    return 0;
}