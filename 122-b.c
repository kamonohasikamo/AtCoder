#include <stdio.h>

int ATCG(char b) {
  if (b == 'A' || b == 'T' || b == 'C' || b == 'G') {
    return 0;
  } else {
    return 1;
  }
}

int main(void) {
  char s[10];
  scanf("%s", s);
  int i;
  int count=0,ans=0;
  for (i = 0; s[i] != '\0'; i++) {
    if (ATCG(s[i]) == 0) {
      count++;
    } else {
      if (ans < count){
        ans = count;
      }
      count = 0;
    }
  }
  if (ans < count){
    ans = count;
  }
  printf("%d\n", ans);
  return 0;
}
