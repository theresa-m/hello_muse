#include <stdio.h>

static char text[] = "Hello Lift!";

int main() {
    char * printme = text;
    printf("%s\n",printme);
    return 0;
}
