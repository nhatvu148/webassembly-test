// #include <emscripten.h>
#include <stdio.h>

// int main()
// {
//   printf("Hello World!\n");
//   return 0;
// }

// int main(int argc, char **argv)
// {
//   printf("%s %s!\n", argv[1], argv[2]);
//   return 0;
// }

int main()
{
  // Open myFile.txt for reading
  FILE *fp = fopen("myFile.txt", "r");
  // Until we reach the end of the file (EOF), output the next character
  char c;
  while ((c = fgetc(fp)) != EOF)
    printf("%c", c);
  // Close the file
  fclose(fp);
  // Flush stdout; otherwise, we get a warning in the developer console that
  // looks like this: "stdio streams had content in them that was not flushed"
  printf("\n");
  return 0;
}

// int increment(int num)
// {
//   num++;
//   printf("%d\n", num);
//   return 0;
// }

// int say_hello(char *name)
// {
//   printf("Hello %s!", name);
//   return 0;
// }