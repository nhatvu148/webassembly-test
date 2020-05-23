#include <emscripten.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  printf("%s %s!\n", argv[1], argv[2]);
  return 0;
}

int increment(int num)
{
  num++;
  printf("%d\n", num);
  return 0;
}

int say_hello(char *name)
{
  printf("Hello %s!", name);
  return 0;
}