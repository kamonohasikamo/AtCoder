#include <stdio.h>
#include "longint.h"

int main (void) {
  int n,m;
  scanf("%d%d", &n, &m);
  long int a[n];
  int b[n];
  int i,j;
  for (i=0;i<n;i++) {
    scanf("%ld%d", &a[i], &b[i]);
  }
  long int min = a[0];
  int minStore=0;
  unsigned long long int ans = 0;
  int answer[100];
  int k;
  for (j=0;j<n;j++) {
    for (i=0;i<n;i++) {
      if (min > a[i] && a[i] != -1) {
        min = a[i];
        minStore = i;
      }
    }
    if (b[minStore] < m) {
      ans += a[minStore] * b[minStore];
      m -= b[minStore];
      a[minStore] = -1;
      min = a[0];
      minStore = 0;
    } else {
      printf("%d\n", ans + (lmul(a[minStore], m)));
      break;
    }
  }

  return 0;
}
