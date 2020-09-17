#include <stdio.h>
int main() {
    long int i ;
    float k = 34.E-10;
    for (i = 0x01L; i < 10; i++) {
        char c = (i % 95) + 32;
        char multiChars = 'abc';
        printf("%i: %c\n", i, c);
        char *s;
        s = "some string";
        puts(s);
    }
    return 0;
}

