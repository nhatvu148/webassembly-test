#include <emscripten.h>
#include <stdio.h>

char *str = "my string variable";

char *getStr()
{
    return str;
}

int main()
{
    printf("WASM ready\n");

    return 1;
}
