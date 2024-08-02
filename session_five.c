#include <stdio.h>

void main_2() {
    // step -> get data from switch

    // step2 -> decrypt data by the proper key

    // step3 -> check validation

    // step4 -> do some calc

    // last step -> send data to client

    // crush the food (function_one)
    // function_two
    // input -> process -> output
}

/*
 *      RETURN_TYPE | VOID FUNCTION_NAME(PARAM) {
 *          // PROCESS - CODE
 *      }
 *
 */


int strlength(char[]);

int main() {
    int first = 23;
    int second = 54;

    // machine -> a, b -> a + b ?
    char* str = "tarokh";

    int answer = strlength(str);

    printf("the answer is -> %d", answer);

    return 0;
}

int strlength(char str[]) {
    int item = 0;

    while (str[item] != '\0')
        ++item;

    return item;
}
