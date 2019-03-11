#include <stdio.h>

int main (void) {
  int n, m, c;
  scanf("%d%d%d", &n, &m, &c);
  int b[m];
  int i,j;
  for (i=0;i<m;i++){
    scanf("%d", &b[i]);
  }
  int a[n][m];
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++) {
      scanf("%d", &a[i][j]);
    }
  }
  int ans=0, count=0;
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++) {
      ans += a[i][j] * b[j];
    }
    ans += c;
    if (ans > 0) {
      count++;
    }
    ans = 0;
  }
  printf("%d\n",count);
  return 0;
}
