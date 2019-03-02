#include <stdio.h>

int main (void) {
  int n, i;
  scanf("%d", &n);
  double x[n];
  char u[n][3];
  for (i=0;i<n;i++){
    scanf("%lf", &x[i]);
    scanf("%s", u[i]);
  }
  double sum;
  for (i=0;i<n;i++) {
    if (u[i][0] == 'J') {
      sum += x[i];
    } else {
      sum += x[i]*380000;
    }
  }
  printf("%lf", sum);
  return 0;
}
