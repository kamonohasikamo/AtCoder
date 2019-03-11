#include <stdio.h>

int main (void) {
  int h,w;
  scanf("%d%d", &h, &w);
  int hh,ww;
  scanf("%d%d", &hh, &ww);

  printf("%d\n", (h * w) - ( (hh * w) + (ww * (h - hh)) ));

  return 0;
}
