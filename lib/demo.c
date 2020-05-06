#include <stdio.h>
#include <string.h>

int main()
{
    printf("WASM ready - Testing with Emscripten html\n");
    return 1;
}

int getNum()
{
    return 12345;
}

int getDoubleNum(int n)
{
    return n * 2;
}

char *greet()
{
    return "Hello!";
}

char *greetname(char *name)
{
    char *greeting = "Hello! ";
    strcat(greeting, name);
    return greeting;
}