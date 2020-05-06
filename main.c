#include <string.h>

void numLog(int n);
void stringLog(char * offset, length);

int main() { 
  return 42;
}

int multiplyBy2(int x) {
  return x * 2;
}

void newMultiplyBy2(int x) {
  numLog(x * 2);
}

void greet() {
  char * msg = "Hello from C!";
  stringLog(msg, strlen(msg));
}