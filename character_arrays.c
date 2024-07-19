
#include <stdio.h>

int main() {

    // character arrays
    // string

    // for a string of character -> we use double quote ""
    // for a character -> we use single quote ''

    // array format -> DATA_TYPE NAME[SIZE] = { 't', 'a', 'r', 'o', 'k', 'h' };

    char name[7] = "tarokh";    // is not read-only
    printf("my name is --->>> %s\n", name);
    printf("first index of the array ->>> %c\n", name[0]); // 't'
    printf("second index of the array ->>> %c\n", name[1]); // 'a'
    printf("third index of the array ->>> %c\n", name[2]); // 'r'
    printf("last index of the array ->>> %c\n", name[5]); // 'h'
    printf("%c\n", name[6]);
    printf("this character is out of boundaries --->>> %c\n", name[156]);
    name[0] =  'y';
    name[1] =  'p';
    name[2] =  'h';
    name[45] = 't'; // this can be changed in a C program
    printf("this is a disaster --->>> %c\n", name[45]);
    printf("name is %s\n", name);
    printf("this is the null character ---- >>> %c\n", name[6]);
    // 't' 'a' 'r' 'o' 'k' 'h' '\0'
    // '\0' -> null character

    return 0;
}