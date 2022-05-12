#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p -- %c\n", &s[0], s[0]);
    printf("%p -- %c\n", &s[1], s[1]);
    printf("%p -- %c\n", &s[2], s[2]);
    printf("%p -- %c\n", &s[3], s[3]);
    printf("%s\n", s);
}