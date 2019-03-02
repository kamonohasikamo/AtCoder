#include <stdio.h>

int main(void) {
  char s[10];
  scanf("%s", &s);

  if (s[5] == '0' && s[6] <= '4') {
    printf("Heisei\n");
  } else {
    printf("TBD\n");
  }

  return 0;
}
