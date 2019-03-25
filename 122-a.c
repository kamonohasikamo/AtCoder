#include <stdio.h>

int main(void) {
  char b[1];
  scanf("%c", b);
  if (b[0] == 'A') {
    printf("T\n");
  }
  if (b[0] == 'T') {
    printf("A\n");
  }
  if (b[0] == 'C') {
    printf("G\n");
  }
  if (b[0] == 'G') {
    printf("C\n");
  }
  return 0;
}
