#include <stdio.h>

int main(void) {
    char *foo = ":(";

    printf("printing string foo %s\n", foo);
    foo[1] = ')';
    printf("printing string foo %s\n", foo);
    
    return 0;
}
